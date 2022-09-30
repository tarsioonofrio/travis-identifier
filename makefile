# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif

SRC_ROOT=src-t1
SRC_FILE=src-t1/quick_sort.c src-t1/merge_sort.c src-t1/heap_sort.c src-t1/selection_sort.c src-t1/insertion_sort.c src-t1/bubble_sort.c src-t1/radix_sort.c src-t1/counting_sort.c src-t1/sort.c
TARGET=src-t1/sort
SRC_TEST=test-t1

#SRC_ROOT=src
#SRC_TEST=test
#SRC_FILE=src/foo.c
#TARGET=src/foo

C_COMPILER=gcc
CLANG_COMPILER=clang

UNITY_ROOT=Unity

CFLAGS=-std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

TARGET_BASE1=all_tests
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  $(SRC_FILE) \
  $(SRC_TEST)/TestFoo.c \
  $(SRC_TEST)/test_runners/TestFoo_Runner.c \
  $(SRC_TEST)/test_runners/all_tests.c
INC_DIRS=-I$(SRC_ROOT) -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src

all: clean compile run

compile:
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SRC_FILES1) -o $(TARGET1)

sanitize:
	$(CLANG_COMPILER) $(CFLAGS) -fsanitize=address $(INC_DIRS) $(SRC_FILES1) -o $(TARGET1)
	./$(TARGET1) -v

cov:
	$(C_COMPILER) $(CFLAGS) -fprofile-arcs -ftest-coverage $(INC_DIRS) $(SRC_FILES1) -o $(TARGET1)
	./$(TARGET1) -v
	gcov -b $(SRC_FILES1)
	
valgrind:
	gcc -g -Wall -Wfatal-errors $(INC_DIRS) $(SRC_FILES1) -o $(TARGET1)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET1) -v 
	
cppcheck: 
	cppcheck --enable=all --suppress=missingIncludeSystem $(SRC_FILES1)

run:
	./$(TARGET1) -v

clean:
	$(CLEANUP) $(TARGET1)
#	$(CLEANUP) $(TARGET)


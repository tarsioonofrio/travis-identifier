cmake_minimum_required(VERSION 3.21)
project(t1 C)

set(CMAKE_C_STANDARD 90)

add_executable(t1 main.c protocol.h protocol.c)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(t1 Threads::Threads)

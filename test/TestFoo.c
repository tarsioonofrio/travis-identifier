#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);
TEST_SETUP(Foo){}
TEST_TEAR_DOWN(Foo){}

TEST(Foo, basic_SELECTION_On2_INT)
{
	int array[] = {3, 2, 1};
	int out[] = {1, 2, 3};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, sizeof(array) / sizeof(int));
	TEST_ASSERT_EQUAL(status, 0);
}


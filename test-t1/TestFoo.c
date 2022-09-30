#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestFoo1)
{
    // All of these should pass
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int out[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char type[] = "On2";
    int status;
    int length = sizeof(array) / sizeof(int);

    status = sort(array, length, type, SELECTION);
    TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
    TEST_ASSERT_EQUAL(status, 0);
//    TEST_ASSERT_EQUAL_DOUBLE_ARRAY
//    TEST_ASSERT_EQUAL_FLOAT_ARRAY
}

//TEST(Foo, TestFoo2)
//{
//    // This test will fail
//    //TEST_ASSERT_EQUAL(2, foo(1,2));
//    TEST_ASSERT_EQUAL(-1, foo(2,2));
//}

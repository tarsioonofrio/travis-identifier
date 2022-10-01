#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);
TEST_SETUP(Foo){}
TEST_TEAR_DOWN(Foo){}

TEST(Foo, basic_COUNTING_On_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_RADIX_On_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_BUBBLE_On2_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_INSERTION_On2_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_SELECTION_On2_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_HEAP_Onlogn_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_MERGE_Onlogn_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic_QUICK_Onlogn_INT_0)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, type_algo_upper_COUNTING_ON_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_RADIX_ON_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_BUBBLE_ON2_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_INSERTION_ON2_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_SELECTION_ON2_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_HEAP_ONLOGN_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_MERGE_ONLOGN_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper_QUICK_ONLOGN_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_COUNTING_on_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_RADIX_on_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_BUBBLE_on2_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_INSERTION_on2_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_SELECTION_on2_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_HEAP_onlogn_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_MERGE_onlogn_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower_QUICK_onlogn_INT_1)
{
	int array[] = {4, 3, 2, 1};
	int out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_COUNTING_On_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_RADIX_On_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_BUBBLE_On2_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_INSERTION_On2_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_SELECTION_On2_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_HEAP_Onlogn_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_MERGE_Onlogn_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_1_QUICK_Onlogn_INT_1)
{
	int array[] = {1};
	int out[] = {1};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_2_COUNTING_On_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_RADIX_On_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_BUBBLE_On2_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_INSERTION_On2_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_SELECTION_On2_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_HEAP_Onlogn_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_MERGE_Onlogn_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_2_QUICK_Onlogn_INT_0)
{
	int array[] = {1, 2};
	int out[] = {1, 2};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_COUNTING_On_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_RADIX_On_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_BUBBLE_On2_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_INSERTION_On2_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_SELECTION_On2_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_HEAP_Onlogn_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_MERGE_Onlogn_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_20_QUICK_Onlogn_INT_0)
{
	int array[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len_21_COUNTING_On_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_RADIX_On_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "On";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_BUBBLE_On2_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_INSERTION_On2_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_SELECTION_On2_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "On2";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_HEAP_Onlogn_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_MERGE_Onlogn_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len_21_QUICK_Onlogn_INT_1)
{
	int array[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	char type[] = "Onlogn";
	int length = sizeof(array) / sizeof(int);
	int status = sort(array, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(out, array, length);
	TEST_ASSERT_EQUAL(status, 1);
}


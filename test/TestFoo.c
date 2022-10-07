#include "sort.h"
#include "limits.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);
TEST_SETUP(Foo){}
TEST_TEAR_DOWN(Foo){}

TEST(Foo, basic__COUNTING_On_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__COUNTING_On_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__RADIX_On_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__RADIX_On_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__INSERTION_On2_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__INSERTION_On2_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__SELECTION_On2_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__SELECTION_On2_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, basic__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, basic__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len1__COUNTING_On_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "On";
	int length = 1;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__COUNTING_On_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "On";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__RADIX_On_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "On";
	int length = 1;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__RADIX_On_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "On";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__BUBBLE_On2_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "On2";
	int length = 1;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__BUBBLE_On2_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "On2";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__INSERTION_On2_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "On2";
	int length = 1;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__INSERTION_On2_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "On2";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__SELECTION_On2_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "On2";
	int length = 1;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__SELECTION_On2_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "On2";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__HEAP_Onlogn_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "Onlogn";
	int length = 1;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__HEAP_Onlogn_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__MERGE_Onlogn_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "Onlogn";
	int length = 1;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__MERGE_Onlogn_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len1__QUICK_Onlogn_INT_1_array)
{
	int array_in[] = {1};
	int array_out[] = {1};
	char type[] = "Onlogn";
	int length = 1;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len1__QUICK_Onlogn_INT_1_status)
{
	int array_in[] = {1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 1;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len2__COUNTING_On_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "On";
	int length = 2;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__COUNTING_On_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "On";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__RADIX_On_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "On";
	int length = 2;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__RADIX_On_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "On";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__BUBBLE_On2_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "On2";
	int length = 2;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__BUBBLE_On2_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "On2";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__INSERTION_On2_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "On2";
	int length = 2;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__INSERTION_On2_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "On2";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__SELECTION_On2_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "On2";
	int length = 2;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__SELECTION_On2_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "On2";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__HEAP_Onlogn_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "Onlogn";
	int length = 2;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__HEAP_Onlogn_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "Onlogn";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__MERGE_Onlogn_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "Onlogn";
	int length = 2;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__MERGE_Onlogn_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "Onlogn";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len2__QUICK_Onlogn_INT_1_array)
{
	int array_in[] = {1, 2};
	int array_out[] = {1, 2};
	char type[] = "Onlogn";
	int length = 2;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len2__QUICK_Onlogn_INT_1_status)
{
	int array_in[] = {1, 2};
	char type[] = "Onlogn";
	int status = 0;
	int length = 2;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__COUNTING_On_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On";
	int length = 20;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__COUNTING_On_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__RADIX_On_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On";
	int length = 20;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__RADIX_On_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__BUBBLE_On2_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On2";
	int length = 20;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__BUBBLE_On2_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__INSERTION_On2_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On2";
	int length = 20;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__INSERTION_On2_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__SELECTION_On2_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "On2";
	int length = 20;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__SELECTION_On2_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__HEAP_Onlogn_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "Onlogn";
	int length = 20;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__HEAP_Onlogn_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__MERGE_Onlogn_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "Onlogn";
	int length = 20;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__MERGE_Onlogn_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len20__QUICK_Onlogn_INT_1_array)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	char type[] = "Onlogn";
	int length = 20;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len20__QUICK_Onlogn_INT_1_status)
{
	int array_in[] = {19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 20;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, len21__COUNTING_On_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On";
	int length = 21;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__COUNTING_On_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__RADIX_On_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On";
	int length = 21;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__RADIX_On_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__BUBBLE_On2_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int length = 21;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__BUBBLE_On2_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__INSERTION_On2_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int length = 21;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__INSERTION_On2_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__SELECTION_On2_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int length = 21;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__SELECTION_On2_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__HEAP_Onlogn_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int length = 21;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__HEAP_Onlogn_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__MERGE_Onlogn_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int length = 21;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__MERGE_Onlogn_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, len21__QUICK_Onlogn_INT_1_array)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int array_out[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int length = 21;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, len21__QUICK_Onlogn_INT_1_status)
{
	int array_in[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 21;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, size__COUNTING_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "On";
	int length = 3;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__COUNTING_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__RADIX_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "On";
	int length = 3;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__RADIX_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__BUBBLE_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "On2";
	int length = 3;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__BUBBLE_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__INSERTION_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "On2";
	int length = 3;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__INSERTION_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__SELECTION_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "On2";
	int length = 3;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__SELECTION_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__HEAP_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "Onlogn";
	int length = 3;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__HEAP_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__MERGE_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "Onlogn";
	int length = 3;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__MERGE_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, size__QUICK_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {2, 3, 4};
	char type[] = "Onlogn";
	int length = 3;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, size__QUICK_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 3;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__COUNTING_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "On";
	int length = 8;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__COUNTING_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "On";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__RADIX_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "On";
	int length = 8;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__RADIX_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "On";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "On2";
	int length = 8;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__INSERTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "On2";
	int length = 8;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__INSERTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__SELECTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "On2";
	int length = 8;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__SELECTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "On2";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 8;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 8;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, repeat__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	int array_out[] = {0, 1, 2, 3, 3, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 8;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, repeat__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 3, 3, 2, 1, 0};
	char type[] = "Onlogn";
	int status = 0;
	int length = 8;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__COUNTING_On_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "On";
	int length = 10;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__COUNTING_On_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "On";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__RADIX_On_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "On";
	int length = 10;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__RADIX_On_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "On";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "On2";
	int length = 10;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "On2";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__INSERTION_On2_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "On2";
	int length = 10;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__INSERTION_On2_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "On2";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__SELECTION_On2_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "On2";
	int length = 10;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__SELECTION_On2_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "On2";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = 10;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "Onlogn";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = 10;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "Onlogn";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, negative__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	int array_out[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	char type[] = "Onlogn";
	int length = 10;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, negative__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {4, 3, 2, 1, 0, -1, -2, -3, -4, -5};
	char type[] = "Onlogn";
	int status = 0;
	int length = 10;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__COUNTING_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__COUNTING_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__RADIX_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__RADIX_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__INSERTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__INSERTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__SELECTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__SELECTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_ok__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MIN + 0, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_ok__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + 0, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__COUNTING_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__COUNTING_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__RADIX_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__RADIX_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__INSERTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__INSERTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__SELECTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__SELECTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_ok__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX + 0};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_ok__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 0, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__COUNTING_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__COUNTING_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__RADIX_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__RADIX_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__INSERTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__INSERTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__SELECTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__SELECTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_min_err__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	int array_out[] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN + -1};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_min_err__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MIN + -1, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__COUNTING_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__COUNTING_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__RADIX_On_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On";
	int length = 11;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__RADIX_On_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "On";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__BUBBLE_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__BUBBLE_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__INSERTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__INSERTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__SELECTION_On2_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "On2";
	int length = 11;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__SELECTION_On2_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "On2";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__HEAP_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__HEAP_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__MERGE_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__MERGE_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, limit_max_err__QUICK_Onlogn_INT_0_array)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	int array_out[] = {INT_MAX + 1, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
	char type[] = "Onlogn";
	int length = 11;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, limit_max_err__QUICK_Onlogn_INT_0_status)
{
	int array_in[] = {5, 4, 3, 2, 1, INT_MAX + 1, 0, -1, -2, -3, -4};
	char type[] = "Onlogn";
	int status = 0;
	int length = 11;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 0);
}


TEST(Foo, type_algo_upper__COUNTING_ON_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = 4;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__COUNTING_ON_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__RADIX_ON_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = 4;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__RADIX_ON_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__BUBBLE_ON2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = 4;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__BUBBLE_ON2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__INSERTION_ON2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = 4;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__INSERTION_ON2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__SELECTION_ON2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = 4;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__SELECTION_ON2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__HEAP_ONLOGN_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = 4;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__HEAP_ONLOGN_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__MERGE_ONLOGN_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = 4;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__MERGE_ONLOGN_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_upper__QUICK_ONLOGN_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = 4;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_upper__QUICK_ONLOGN_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__COUNTING_on_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = 4;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__COUNTING_on_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__RADIX_on_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on";
	int length = 4;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__RADIX_on_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__BUBBLE_on2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = 4;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__BUBBLE_on2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__INSERTION_on2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = 4;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__INSERTION_on2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__SELECTION_on2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "on2";
	int length = 4;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__SELECTION_on2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "on2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__HEAP_onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = 4;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__HEAP_onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__MERGE_onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = 4;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__MERGE_onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_lower__QUICK_onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int length = 4;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_lower__QUICK_onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__COUNTING_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__COUNTING_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__COUNTING_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__COUNTING_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, COUNTING);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__RADIX_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__RADIX_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__RADIX_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__RADIX_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, RADIX);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__BUBBLE_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__BUBBLE_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__BUBBLE_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__BUBBLE_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, BUBBLE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__INSERTION_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__INSERTION_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__INSERTION_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__INSERTION_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, INSERTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__SELECTION_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__SELECTION_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__SELECTION_Onlogn_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int length = 4;
	sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__SELECTION_Onlogn_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "Onlogn";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, SELECTION);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__HEAP_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__HEAP_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__HEAP_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__HEAP_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, HEAP);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__MERGE_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__MERGE_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__MERGE_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__MERGE_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, MERGE);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__QUICK_On_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On";
	int length = 4;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__QUICK_On_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 1);
}


TEST(Foo, type_algo_err__QUICK_On2_INT_1_array)
{
	int array_in[] = {4, 3, 2, 1};
	int array_out[] = {4, 3, 2, 1};
	char type[] = "On2";
	int length = 4;
	sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL_INT_ARRAY(array_out, array_in, length);
}

TEST(Foo, type_algo_err__QUICK_On2_INT_1_status)
{
	int array_in[] = {4, 3, 2, 1};
	char type[] = "On2";
	int status = 0;
	int length = 4;
	status = sort(array_in, length, type, QUICK);
	TEST_ASSERT_EQUAL(status, 1);
}


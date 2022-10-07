#include "sort.h"
#include "limits.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);
TEST_SETUP(Foo){}
TEST_TEAR_DOWN(Foo){}

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


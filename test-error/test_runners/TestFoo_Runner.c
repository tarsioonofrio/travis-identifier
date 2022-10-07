#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
	RUN_TEST_CASE(Foo, negative__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, negative__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, negative__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, negative__RADIX_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__RADIX_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__RADIX_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__RADIX_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__RADIX_On_INT_0_status);
}

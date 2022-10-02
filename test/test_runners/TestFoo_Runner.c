#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
	RUN_TEST_CASE(Foo, basic__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, basic__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, basic__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, basic__RADIX_On_INT_0_status);
	RUN_TEST_CASE(Foo, basic__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, basic__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, basic__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, basic__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, basic__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, basic__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, basic__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, basic__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, basic__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, basic__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, basic__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, basic__QUICK_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, len1__COUNTING_COUNTING_INT_1_array);
	RUN_TEST_CASE(Foo, len1__COUNTING_COUNTING_INT_1_status);
	RUN_TEST_CASE(Foo, len2__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, len2__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, len20__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, len20__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, len21__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, len21__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, size__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, size__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, negative__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, negative__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, negative__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, negative__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, negative__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, negative__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, negative__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, negative__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, negative__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, negative__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, negative__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, negative__QUICK_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, type_algo_upper__COUNTING_ON_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__COUNTING_ON_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__RADIX_ON_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__RADIX_ON_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__BUBBLE_ON2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__BUBBLE_ON2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__INSERTION_ON2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__INSERTION_ON2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__SELECTION_ON2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__SELECTION_ON2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__HEAP_ONLOGN_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__HEAP_ONLOGN_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__MERGE_ONLOGN_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__MERGE_ONLOGN_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_upper__QUICK_ONLOGN_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_upper__QUICK_ONLOGN_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__COUNTING_on_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__COUNTING_on_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__RADIX_on_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__RADIX_on_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__BUBBLE_on2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__BUBBLE_on2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__INSERTION_on2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__INSERTION_on2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__SELECTION_on2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__SELECTION_on2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__HEAP_onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__HEAP_onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__MERGE_onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__MERGE_onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_lower__QUICK_onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_lower__QUICK_onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__COUNTING_On2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__COUNTING_On2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__COUNTING_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__COUNTING_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__RADIX_On2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__RADIX_On2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__RADIX_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__RADIX_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__BUBBLE_On_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__BUBBLE_On_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__BUBBLE_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__BUBBLE_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__INSERTION_On_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__INSERTION_On_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__INSERTION_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__INSERTION_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__SELECTION_On_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__SELECTION_On_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__SELECTION_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__SELECTION_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__HEAP_On_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__HEAP_On_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__HEAP_On2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__HEAP_On2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__MERGE_On_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__MERGE_On_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__MERGE_On2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__MERGE_On2_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__QUICK_On_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__QUICK_On_INT_1_status);
	RUN_TEST_CASE(Foo, type_algo_err__QUICK_On2_INT_1_array);
	RUN_TEST_CASE(Foo, type_algo_err__QUICK_On2_INT_1_status);
}

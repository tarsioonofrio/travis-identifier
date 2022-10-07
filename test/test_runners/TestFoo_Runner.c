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
	RUN_TEST_CASE(Foo, len1__COUNTING_On_INT_1_array);
	RUN_TEST_CASE(Foo, len1__COUNTING_On_INT_1_status);
	RUN_TEST_CASE(Foo, len1__RADIX_On_INT_1_array);
	RUN_TEST_CASE(Foo, len1__RADIX_On_INT_1_status);
	RUN_TEST_CASE(Foo, len1__BUBBLE_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len1__BUBBLE_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len1__INSERTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len1__INSERTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len1__SELECTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len1__SELECTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len1__HEAP_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len1__HEAP_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len1__MERGE_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len1__MERGE_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len1__QUICK_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len1__QUICK_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len2__COUNTING_On_INT_1_array);
	RUN_TEST_CASE(Foo, len2__COUNTING_On_INT_1_status);
	RUN_TEST_CASE(Foo, len2__RADIX_On_INT_1_array);
	RUN_TEST_CASE(Foo, len2__RADIX_On_INT_1_status);
	RUN_TEST_CASE(Foo, len2__BUBBLE_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len2__BUBBLE_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len2__INSERTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len2__INSERTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len2__SELECTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len2__SELECTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len2__HEAP_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len2__HEAP_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len2__MERGE_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len2__MERGE_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len2__QUICK_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len2__QUICK_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len20__COUNTING_On_INT_1_array);
	RUN_TEST_CASE(Foo, len20__COUNTING_On_INT_1_status);
	RUN_TEST_CASE(Foo, len20__RADIX_On_INT_1_array);
	RUN_TEST_CASE(Foo, len20__RADIX_On_INT_1_status);
	RUN_TEST_CASE(Foo, len20__BUBBLE_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len20__BUBBLE_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len20__INSERTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len20__INSERTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len20__SELECTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len20__SELECTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len20__HEAP_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len20__HEAP_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len20__MERGE_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len20__MERGE_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len20__QUICK_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len20__QUICK_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len21__COUNTING_On_INT_1_array);
	RUN_TEST_CASE(Foo, len21__COUNTING_On_INT_1_status);
	RUN_TEST_CASE(Foo, len21__RADIX_On_INT_1_array);
	RUN_TEST_CASE(Foo, len21__RADIX_On_INT_1_status);
	RUN_TEST_CASE(Foo, len21__BUBBLE_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len21__BUBBLE_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len21__INSERTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len21__INSERTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len21__SELECTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, len21__SELECTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, len21__HEAP_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len21__HEAP_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len21__MERGE_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len21__MERGE_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, len21__QUICK_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, len21__QUICK_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, size__COUNTING_On_INT_1_array);
	RUN_TEST_CASE(Foo, size__COUNTING_On_INT_1_status);
	RUN_TEST_CASE(Foo, size__RADIX_On_INT_1_array);
	RUN_TEST_CASE(Foo, size__RADIX_On_INT_1_status);
	RUN_TEST_CASE(Foo, size__BUBBLE_On2_INT_1_array);
	RUN_TEST_CASE(Foo, size__BUBBLE_On2_INT_1_status);
	RUN_TEST_CASE(Foo, size__INSERTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, size__INSERTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, size__SELECTION_On2_INT_1_array);
	RUN_TEST_CASE(Foo, size__SELECTION_On2_INT_1_status);
	RUN_TEST_CASE(Foo, size__HEAP_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, size__HEAP_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, size__MERGE_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, size__MERGE_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, size__QUICK_Onlogn_INT_1_array);
	RUN_TEST_CASE(Foo, size__QUICK_Onlogn_INT_1_status);
	RUN_TEST_CASE(Foo, repeat__COUNTING_On_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__COUNTING_On_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__RADIX_On_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__RADIX_On_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, repeat__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, repeat__QUICK_Onlogn_INT_0_status);
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
	RUN_TEST_CASE(Foo, limit_min_ok__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_ok__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_ok__QUICK_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_ok__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_ok__QUICK_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_min_err__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_min_err__QUICK_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__BUBBLE_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__BUBBLE_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__INSERTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__INSERTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__SELECTION_On2_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__SELECTION_On2_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__HEAP_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__HEAP_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__MERGE_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__MERGE_Onlogn_INT_0_status);
	RUN_TEST_CASE(Foo, limit_max_err__QUICK_Onlogn_INT_0_array);
	RUN_TEST_CASE(Foo, limit_max_err__QUICK_Onlogn_INT_0_status);
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

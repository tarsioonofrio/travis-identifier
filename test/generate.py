from pathlib import Path

test_head = """#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);
TEST_SETUP(Foo){}
TEST_TEAR_DOWN(Foo){}

"""

runner_head = """#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
"""

algorithm_list = ("COUNTING", "RADIX", "BUBBLE", "INSERTION", "SELECTION", "HEAP", "MERGE", "QUICK")
type_algo_list = ("On", "On2",  "Onlogn")
type_array_list = ("INT", "FLOAT", "DOUBLE")
status_list = (0, 1)
algorithm_type_list = (
    ("COUNTING", "On"),
    ("RADIX", "On"),
    ("BUBBLE", "On2"),
    ("INSERTION", "On2"),
    ("SELECTION", "On2"),
    ("HEAP", "Onlogn"),
    ("MERGE",  "Onlogn"),
    ("QUICK",  "Onlogn")
)


def create_fn(test_name, algorithm, type_algo, type_array, status, array_in, array_out):
    """
    :param array_out:
    :param test_name: name of test
    :param algorithm: COUNTING, RADIX, BUBBLE, INSERTION, SELECTION, HEAP, MERGE, QUICK
    :param type_algo: On, On2, Onlogn
    :param type_array: INT, FLOAT, DOUBLE
    :param status: 0 = No error; 1 = type algo error, 2 = array size < 2 or > 20)
    :param array_in: list of int, float or double
    :param array_out: list of int, float or double
    :return: string of function
    """
    array_in_str = ", ".join(map(str, array_in))
    array_out_str = ", ".join(map(str, array_out))
    head = f"TEST(Foo, {test_name})"
    int_array = f"int array[] = {{{array_in_str}}};"
    int_out = f"int out[] = {{{array_out_str}}};"
    char_type = f'char type[] = "{type_algo}";'
    int_length = "int length = sizeof(array) / sizeof(int);"
    int_status = f"int status = sort(array, length, type, {algorithm});"
    test_array = f"TEST_ASSERT_EQUAL_{type_array}_ARRAY(out, array, length);"
    test = f"TEST_ASSERT_EQUAL(status, {status});"
    inner_code_list = [int_array, int_out, char_type, int_length, int_status, test_array, test]
    inner_code_txt = "\n\t".join(inner_code_list)
    fn_code_txt = head + "\n{" + "\n\t" + inner_code_txt + "\n}\n\n"
    return fn_code_txt


def create_group(list_test_fn):
    names = [x[0] for x in list_test_fn]
    inner_code_list = [f"RUN_TEST_CASE(Foo, {n});" for n in names]
    runner_txt = "{\n\t" + "\n\t".join(inner_code_list) + "\n}\n"
    return runner_head + runner_txt


def example():
    root_path = Path(__file__).parent
    array_in = [3, 2, 1]
    array_out = sorted(array_in)
    status = 0
    algorithm = 'SELECTION'
    type_algo = 'On2'
    type_array = 'INT'
    test_name = f'basic_{algorithm}_{type_algo}_{type_array}'

    test_txt = create_fn(test_name, algorithm, type_algo, type_array, status, array_in, array_out)

    list_test_name = [test_name]
    runner_txt = create_group(list_test_name)

    with open(root_path / "TestFoo.c", "w") as f:
        f.write(test_head + test_txt)

    with open(root_path / "test_runners/TestFoo_Runner.c", "w") as f:
        f.write(runner_txt)


def main():
    root_path = Path(__file__).parent
    array_in_basic = [4, 3, 2, 1]
    array_out_basic = sorted(array_in_basic)
    type_int = 'INT'
    status_ok = 0
    status_fail = 1

    # testes aprovação básico com int
    basic = [
        (f'basic_{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int, status_ok, array_in_basic,
         array_out_basic)
        for alg, tp in algorithm_type_list
    ]

    # testes reprovação com type algo em upper case
    type_algo_upper = [
        (f'type_algo_upper_{alg}_{tp.upper()}_{type_int}_{status_fail}', alg, tp.lower(), type_int,
         status_fail, array_in_basic, array_in_basic)
        for alg, tp in algorithm_type_list
    ]

    # testes reprovação com type algo em lower case
    type_algo_lower = [
        (f'type_algo_lower_{alg}_{tp.lower()}_{type_int}_{status_fail}', alg, tp.lower(), type_int,
         status_fail, array_in_basic, array_in_basic)
        for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 1 reprovação
    array_len1 = [1]
    len1 = [
        (f'len_1_{alg}_{tp}_{type_int}_{status_fail}', alg, tp, type_int,
         status_fail, array_len1, array_len1)
        for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 2 aprovação
    array_in_len2 = [1, 2]
    array_out_len2 = sorted(array_in_len2)
    len2 = [
        (f'len_2_{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, array_in_len2, array_out_len2)
        for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 20 aprovação
    array_in_len20 = list(reversed(range(20)))
    array_out_len20 = sorted(array_in_len20)
    len20 = [
        (f'len_20_{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, array_in_len20, array_out_len20)
        for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 21 rerovação
    array_in_len21 = list(reversed(range(21)))
    array_out_len21 = sorted(array_in_len21)
    len21 = [
        (f'len_21_{alg}_{tp}_{type_int}_{status_fail}', alg, tp, type_int,
         status_fail, array_in_len21, array_out_len21)
        for alg, tp in algorithm_type_list
    ]

    all_tests_list = [
        basic, type_algo_upper, type_algo_lower, len1, len2, len20, len21
    ]

    all_tests = [item for sublist in all_tests_list for item in sublist]

    test_fn = (
        create_fn(n, alg, tal, tar, s, ain, at)
        for n, alg, tal, tar, s, ain, at in all_tests
    )

    basic_runner = create_group(all_tests)

    with open(root_path / "TestFoo.c", "w") as f:
        f.write(test_head + "\n".join(test_fn))

    with open(root_path / "test_runners/TestFoo_Runner.c", "w") as f:
        f.write(basic_runner)


if __name__ == "__main__":
    main()

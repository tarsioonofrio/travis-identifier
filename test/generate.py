import itertools
from pathlib import Path

test_head = """#include "sort.h"
#include "limits.h"
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
type_algo_list = ("On", "On2", "Onlogn")
type_array_list = ("INT", "FLOAT", "DOUBLE")
status_list = (0, 1)
algorithm_type_list = (
    ("COUNTING", "On"),
    ("RADIX", "On"),
    ("BUBBLE", "On2"),
    ("INSERTION", "On2"),
    ("SELECTION", "On2"),
    ("HEAP", "Onlogn"),
    ("MERGE", "Onlogn"),
    ("QUICK", "Onlogn")
)


def create_group(list_test_fn):
    inner_code_list = [f"RUN_TEST_CASE(Foo, {n});" for n in list_test_fn]
    runner_txt = "{\n\t" + "\n\t".join(inner_code_list) + "\n}\n"
    return runner_head + runner_txt


def fn_gen_default(test_name, algorithm, type_algo, type_array, status, array_in, array_out):
    """
    :param array_out:
    :param test_name: name of test
    :param algorithm: COUNTING, RADIX, BUBBLE, INSERTION, SELECTION, HEAP, MERGE, QUICK
    :param type_algo: On, On2, Onlogn
    :param type_array: INT, FLOAT, DOUBLE
    :param status: 0 = No error; 1 = type algo error, 2 = array size < 2 or > 20)
    :param array_in: list of int, float or double
    :param array_out: list of int, float or double
    :param length: size of array
    :return: string of function
    """

    name_array = f"{test_name}_array"
    name_status = f"{test_name}_status"

    head_array = f"TEST(Foo, {name_array})"
    head_status = f"TEST(Foo, {name_status})"

    array_in_str = ", ".join(map(str, array_in))
    array_out_str = ", ".join(map(str, array_out))
    int_array_in = f"int array_in[] = {{{array_in_str}}};"
    int_array_out = f"int array_out[] = {{{array_out_str}}};"
    char_type = f'char type[] = "{type_algo}";'
    int_status = f'int status = 0;'
    int_length = f"int length = {len(array_out)};"
    status_sort = f"status = sort(array_in, length, type, {algorithm});"
    sort = f"sort(array_in, length, type, {algorithm});"
    test_array = f"TEST_ASSERT_EQUAL_{type_array}_ARRAY(array_out, array_in, length);"
    test_status = f"TEST_ASSERT_EQUAL(status, {status});"

    array_inner_list = [int_array_in, int_array_out, char_type, int_length, sort, test_array]
    array_inner_txt = "\n\t".join(array_inner_list)
    array_fn_code_txt = head_array + "\n{" + "\n\t" + array_inner_txt + "\n}\n\n"

    status_inner_list = [int_array_in, char_type, int_status, int_length, status_sort, test_status]
    status_inner_txt = "\n\t".join(status_inner_list)
    status_fn_code_txt = head_status + "\n{" + "\n\t" + status_inner_txt + "\n}\n\n"

    fn_code = array_fn_code_txt + status_fn_code_txt
    output = {"name": [name_array, name_status], "code": fn_code}
    return output


def fn_gen_limit(test_name, algorithm, type_algo, type_array, status, limit, sum_int=0):
    """
    :param test_name: name of test
    :param algorithm: COUNTING, RADIX, BUBBLE, INSERTION, SELECTION, HEAP, MERGE, QUICK
    :param type_algo: On, On2, Onlogn
    :param type_array: INT, FLOAT, DOUBLE
    :param status: 0 = No error; 1 = type algo error, 2 = array size < 2 or > 20)
    :param limit: MIN or MAX
    :param sum_int: value to add to INT_MIN or INT_MAX
    :return: string of function
    """

    name_array = f"{test_name}_array"
    name_status = f"{test_name}_status"

    head_array = f"TEST(Foo, {name_array})"
    head_status = f"TEST(Foo, {name_status})"

    array_in1 = list(range(5, 0, -1))
    array_in2 = list(range(0, -5, -1))
    length = len(array_in1) + len(array_in2) + 1
    array_in1_str = ", ".join(map(str, array_in1))
    array_in2_str = ", ".join(map(str, array_in2))
    array_in_str = f"{array_in1_str}, INT_{limit} + {sum_int}, {array_in2_str}"
    array_out = sorted(array_in1 + array_in2)
    array_out_str_ = ", ".join(map(str, array_out))
    array_out_str = (
        f"INT_{limit} + {sum_int}, {array_out_str_}" if limit == "MIN" and sum_int == 0
        else f"{array_out_str_}, INT_{limit} + {sum_int}" if limit == "MAX" and sum_int == 0
        else f"INT_{limit} + {sum_int}, {array_out_str_}" if limit == "MAX" and sum_int == 1
        else f"{array_out_str_}, INT_{limit} + {sum_int}" if limit == "MIN" and sum_int == -1
        else ""
    )
    int_array_in = f"int array_in[] = {{{array_in_str}}};"
    int_array_out = f"int array_out[] = {{{array_out_str}}};"
    char_type = f'char type[] = "{type_algo}";'
    int_status = f'int status = 0;'
    int_length = f"int length = {length};"
    status_sort = f"status = sort(array_in, length, type, {algorithm});"
    sort = f"sort(array_in, length, type, {algorithm});"
    test_array = f"TEST_ASSERT_EQUAL_{type_array}_ARRAY(array_out, array_in, length);"
    test_status = f"TEST_ASSERT_EQUAL(status, {status});"

    array_inner_list = [int_array_in, int_array_out, char_type, int_length, sort, test_array]
    array_inner_txt = "\n\t".join(array_inner_list)
    array_fn_code_txt = head_array + "\n{" + "\n\t" + array_inner_txt + "\n}\n\n"

    status_inner_list = [int_array_in, char_type, int_status, int_length, status_sort, test_status]
    status_inner_txt = "\n\t".join(status_inner_list)
    status_fn_code_txt = head_status + "\n{" + "\n\t" + status_inner_txt + "\n}\n\n"

    fn_code = array_fn_code_txt + status_fn_code_txt
    output = {"name": [name_array, name_status], "code": fn_code}
    return output


def generate_files(all_tests, fns):
    # all_tests = [item for sublist in all_tests_list for item in sublist]

    test_name_function = [
        fns[k](* args)
        for k, v in all_tests.items()
        for args in v
    ]
    test_name = [name for d in test_name_function for name in d["name"]]
    test_function = [d["code"] for d in test_name_function]
    basic_runner = create_group(test_name)
    root_path = Path(__file__).parent
    with open(root_path / "TestFoo.c", "w") as f:
        f.write(test_head + "\n".join(test_function))
    with open(root_path / "test_runners/TestFoo_Runner.c", "w") as f:
        f.write(basic_runner)


def example():
    root_path = Path(__file__).parent
    array_in = [3, 2, 1]
    array_out = sorted(array_in)
    status = 0
    algorithm = 'SELECTION'
    type_algo = 'On2'
    type_array = 'INT'
    test_name = f'basic_{algorithm}_{type_algo}_{type_array}'

    test_txt = fn_gen_default(test_name, algorithm, type_algo, type_array, status, array_in, array_out)

    list_test_name = [test_name]
    runner_txt = create_group(list_test_name)

    with open(root_path / "TestFoo.c", "w") as f:
        f.write(test_head + test_txt)

    with open(root_path / "test_runners/TestFoo_Runner.c", "w") as f:
        f.write(runner_txt)


def main():
    array_in_basic = [4, 3, 2, 1]
    array_out_basic = sorted(array_in_basic)
    default_alg = "COUNTING"
    default_type_alg = "On"
    type_int = 'INT'
    status_ok = 0
    status_fail = 1

    # testes aprovação básico com int
    basic = [
        (f'basic__{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int, status_ok, array_in_basic,
         array_out_basic)
        for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 1 reprovação
    array_len1 = [1]
    len1 = [
        (f'len1__{default_alg}_{default_alg}_{type_int}_{status_fail}', default_alg, default_alg, type_int,
         status_fail, array_len1, array_len1)
        # for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 2 aprovação
    array_in_len2 = [1, 2]
    array_out_len2 = sorted(array_in_len2)
    len2 = [
        (f'len2__{default_alg}_{default_type_alg}_{type_int}_{status_ok}', default_alg, default_type_alg, type_int,
         status_ok, array_in_len2, array_out_len2)
        # for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 20 aprovação
    array_in_len20 = list(reversed(range(20)))
    array_out_len20 = sorted(array_in_len20)
    len20 = [
        (f'len20__{default_alg}_{default_type_alg}_{type_int}_{status_ok}', default_alg, default_type_alg, type_int,
         status_ok, array_in_len20, array_out_len20)
        # for alg, tp in algorithm_type_list
    ]

    # testes com tamanho do array 21 reprovação
    array_in_len21 = list(reversed(range(21)))
    array_out_len21 = sorted(array_in_len21)
    len21 = [
        (f'len21__{default_alg}_{default_type_alg}_{type_int}_{status_ok}', default_alg, default_type_alg, type_int,
         status_fail, array_in_len21, array_out_len21)
        # for alg, tp in algorithm_type_list
    ]

    # teste com length do array_out diferente do tamanho da array_in
    size = [
        (f'size__{default_alg}_{default_type_alg}_{type_int}_{status_ok}', default_alg, default_type_alg, type_int,
         status_ok, array_in_basic, sorted(array_in_basic[:3]))
        # for alg, tp in algorithm_type_list
    ]

    # testar números array com números negativos
    # "COUNTING", "RADIX" tem erro
    array_in_neg = list(reversed(range(-5, 5)))
    array_out_neg = sorted(array_in_neg)
    negative = [
        (f'negative__{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, array_in_neg, array_out_neg)
        for alg, tp in algorithm_type_list
        if alg not in ["COUNTING", "RADIX"]
    ]

    # testar limites mínimos do int aprovado
    limit_min_ok = [
        (f'limit_min_ok__{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, "MIN")
        for alg, tp in algorithm_type_list
        if alg not in ["COUNTING", "RADIX"]
    ]

    limit_max_ok = [
        (f'limit_max_ok__{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, "MAX")
        for alg, tp in algorithm_type_list
        if alg not in ["COUNTING", "RADIX"]
    ]

    limit_min_err = [
        (f'limit_min_err__{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, "MIN", -1)
        for alg, tp in algorithm_type_list
        if alg not in ["COUNTING", "RADIX"]
    ]

    limit_max_err = [
        (f'limit_max_err__{alg}_{tp}_{type_int}_{status_ok}', alg, tp, type_int,
         status_ok, "MAX", +1)
        for alg, tp in algorithm_type_list
        if alg not in ["COUNTING", "RADIX"]
    ]

    # testes reprovação com type algo em upper case
    type_algo_upper = [
        (f'type_algo_upper__{alg}_{tp.upper()}_{type_int}_{status_fail}', alg, tp.lower(), type_int,
         status_fail, array_in_basic, array_in_basic)
        for alg, tp in algorithm_type_list
    ]

    # testes reprovação com type algo em lower case
    type_algo_lower = [
        (f'type_algo_lower__{alg}_{tp.lower()}_{type_int}_{status_fail}', alg, tp.lower(), type_int,
         status_fail, array_in_basic, array_in_basic)
        for alg, tp in algorithm_type_list
    ]

    # testes reprovação com type algo de outros tipos
    type_algo_error = [
        (f'type_algo_err__{alg}_{tp_err}_{type_int}_{status_fail}', alg, tp_err, type_int,
         status_fail, array_in_basic, array_in_basic)
        for alg, tp in algorithm_type_list
        for tp_err in type_algo_list
        if tp_err != tp
    ]

    all_tests_list = {
        "fn_gen_default": list(itertools.chain(
            basic, len1, len2, len20, len21,
            size, negative,
            type_algo_upper, type_algo_lower, type_algo_error
        )),
        "fn_gen_limit": list(itertools.chain(
            limit_min_ok, limit_max_ok, limit_min_err, limit_max_err
        ))
    }

    generate_files(
        all_tests_list,
        {"fn_gen_default": fn_gen_default, "fn_gen_limit": fn_gen_limit}
    )
    print("End")


if __name__ == "__main__":
    main()

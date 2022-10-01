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
status_list = (0, 1, 2)
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


def create_fn(test_name, algorithm, type_algo, type_array, status, array):
    """
    :param test_name: name of test
    :param algorithm: COUNTING, RADIX, BUBBLE, INSERTION, SELECTION, HEAP, MERGE, QUICK
    :param type_algo: On, On2, Onlogn
    :param type_array: INT, FLOAT, DOUBLE
    :param status: 0 = No error; 1 = type algo error, 2 = array size < 2 or > 20)
    :param array: list of int, float or double
    :return: string of function
    """
    array_in = ", ".join(map(str, array))
    array_out = ", ".join(map(str, sorted(array)))
    head = f"TEST(Foo, {test_name})"
    int_array = f"int array[] = {{{array_in}}};"
    int_out = f"int out[] = {{{array_out}}};"
    char_type = f'char type[] = "{type_algo}";'
    int_length = "int length = sizeof(array) / sizeof(int);"
    int_status = f"int status = sort(array, length, type, {algorithm});"
    test_array = f"TEST_ASSERT_EQUAL_{type_array}_ARRAY(out, array, sizeof(array) / sizeof(int));"
    test = f"TEST_ASSERT_EQUAL(status, {status});"
    inner_code_list = [int_array, int_out, char_type, int_length, int_status, test_array, test]
    inner_code_txt = "\n\t".join(inner_code_list)
    fn_code_txt = head + "\n{" + "\n\t" + inner_code_txt + "\n}\n\n"
    return fn_code_txt


def create_group(list_test_name):
    inner_code_list = [f"RUN_TEST_CASE(Foo, {n});" for n in list_test_name]
    runner_txt = "{\n\t" + "\n\t".join(inner_code_list) + "\n}\n"
    return runner_head + runner_txt


def main():
    root_path = Path(__file__).parent
    array = [3, 2, 1]
    status = 0
    algorithm = 'SELECTION'
    type_algo = 'On2'
    type_array = 'INT'
    test_name = f'basic_{algorithm}_{type_algo}_{type_array}'

    test_txt = create_fn(test_name, algorithm, type_algo, type_array, status, array)

    list_test_name = [test_name]
    runner_txt = create_group(list_test_name)

    with open(root_path / "TestFoo.c", "w") as f:
        f.write(test_head + test_txt)

    with open(root_path / "test_runners/TestFoo_Runner.c", "w") as f:
        f.write(runner_txt)


if __name__ == "__main__":
    main()

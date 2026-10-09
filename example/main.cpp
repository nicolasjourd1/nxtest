import nxtest;
import std;

using namespace nx::test;

int main()
{
    add_test("math", "", [] {
        expect_eq(1 + 1, 2);
        expect_near(0.1 + 0.2, 0.3);
        expect_lt(1, 2);
    });

    add_test("exceptions", "", [] {
        expect_throws<std::out_of_range>([] { return std::vector<int>{}.at(0); });
        expect_no_throw([] { return std::vector<int>{}.at(0); });
    });

    return run_all();
}

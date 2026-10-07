import std;
import nxtest;

int add(int x, int y) { return x + y; }
std::string greet(const std::string &name) { return "Hello, " + name; }

int main() {

  nx::test::add_test("addition", []() {
    nx::test::expect_eq(add(2, 3), 5);
    nx::test::expect_eq(add(1, 1), 1);
  });

  nx::test::add_test("greeting", []() {
    nx::test::expect_eq(greet("Alice"), std::string("Hello, Alice"));
    nx::test::expect_eq(greet("Bob"), std::string("Hello, Bob"));
  });

  return nx::test::run_all();
}

import std;
import nxtest;

int add(int x, int y) { return x + y; }
std::string greet(const std::string &name) { return "Hello, " + name; }

int main() {

  nxtest::add_test("addition", []() {
    nxtest::expect_eq(add(2, 3), 5);
    nxtest::expect_eq(add(1, 1), 1);
  });

  nxtest::add_test("greeting", []() {
    nxtest::expect_eq(greet("Alice"), std::string("Hello, Alice"));
    nxtest::expect_eq(greet("Bob"), std::string("Hello, Bob"));
  });

  return nxtest::run_all();
}

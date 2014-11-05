#include <iostream>

void foo(int n) {
  std::cout << n << " is a int." << std::endl;
}

void foo(double x) {
  std::cout << x << " is a double." << std::endl;
}

void foo(bool b) {
  std::cout << b << " is a nice bool." << std::endl;
}

int main(int argc, char *argv[]) {
  foo(5);
  foo(6.7);
  foo(true);
  return 0;
}

#include <iostream>

int main(int argc, char *argv[]) {
  int num1(1234), num2(2345);
  std::cout << std::oct << num2 << '\t' << std::hex << num2 << '\t' << std::dec << num2 << std::endl;

  std::cout << (num1 < num2) << std::endl;
  std::cout << std::boolalpha << (num1 < num2) << std::endl;

  double dub(1357);
  std::cout << dub << '\t' << std::showpos << dub << '\t' << std::showpoint << dub << std::endl;

  std::cout << dub << '\t' << std::fixed << dub << '\t' << std::scientific << dub << '\n' << std::noshowpos << dub << std::endl;
  return 0;
}

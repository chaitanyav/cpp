#include <iostream>

int main(int argc, char *argv[]) {
  int factArg = 0;
  int fact(1);

  do {
    std::cout << "Factorial of: ";
    std::cin >> factArg;
    if(factArg < 0) {
      std::cout << "No negative values, please!" << std::endl;
    }
  } while(factArg < 0);

  int i = 2;
  while(i <= factArg) {
    fact = fact * i;
    i++;
  }
  std::cout << "The factorial of " << factArg << " is " << fact << std::endl;
  return 0;
}

#include <iostream>

struct Fraction {
  int numer, denom;
  std::string description;
};

void printFraction(Fraction f) {
  std::cout << f.numer << "/" << f.denom << std::endl;
  std::cout << " =? " << f.description << std::endl;
}

int main(int argc, char *argv[]) {
  Fraction f1;
  f1.numer = 4;
  f1.denom = 5;
  f1.description = "four fifths";

  Fraction f2 = {2, 3, "two thirds"};
  f1.numer = f1.numer + 2;
  printFraction(f1);
  printFraction(f2);
}

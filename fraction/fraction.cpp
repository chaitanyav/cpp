#include <iostream>
#include "fraction.h"
#include <sstream>

void Fraction::set(int nn, int nd) {
  m_Numerator = nn;
  m_Denominator = nd;
}

double Fraction::toDouble() const {
  return (1.0 * m_Numerator) / m_Denominator;
}

std::string Fraction::toString() const {
  std::stringstream ss;
  ss << m_Numerator << " / " << m_Denominator;
  return ss.str();
}

int main(int argc, char *argv[]) {
  Fraction f1;
  f1.set(1, 2);
  std::cout << f1.toDouble() << std::endl;
  std::cout << f1.toString() << std::endl;
  return 0;
}

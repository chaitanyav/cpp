#include "complex.h"
#include <iostream>
#include <sstream>

Complex::Complex(double realPart, double imPart) : m_R(realPart), m_I(imPart) {
  std::cout << "complex(" << m_R << "," << m_I << ")" << std::endl;
}

Complex::Complex(double realPart) : m_R(realPart), m_I(0) {

}

Complex::Complex() : m_R(0), m_I(0) {

}

std::string Complex::toString() const {
  std::ostringstream strbuf;
  strbuf << "(" << m_R << ", " << m_I << ")";
  return strbuf.str();
}

int main(int argc, char *argv[]) {
  Complex c1;
  Complex c2(3.14);
  Complex c3(6.2, 10.23);
  std::cout << c1.toString() << '\t' << c2.toString() << '\t' << c3.toString() << std::endl;

  return 0;
}

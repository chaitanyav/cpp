#include <iostream>
#include <sstream>
#include "fraction.h"

int Fraction::s_assigns = 0;
int Fraction::s_copies = 0;
int Fraction::s_ctors = 0;

Fraction::Fraction(int n, int d) : m_Numer(n), m_Denom(d) {
  ++s_ctors;
}

Fraction::Fraction(const Fraction& other) : m_Numer(other.m_Numer), m_Denom(other.m_Denom) {
  ++s_copies;
}

Fraction& Fraction::operator=(const Fraction& other) {
    if(this != &other) {
      m_Numer = other.m_Numer;
      m_Denom = other.m_Denom;
      ++s_assigns;
    }
  return *this;
}

Fraction Fraction::multiply(Fraction other) {
  Fraction f(0, 0);
  f.m_Numer *= this->m_Numer * other.m_Numer;
  f.m_Denom *= this->m_Denom * other.m_Denom;
  return f;
}

std::string Fraction::report() {
  std::ostringstream sbuf;
  sbuf << "Assigns: " << s_assigns << " Copies: " << s_copies << " Constructors: " << s_ctors << std::endl;
  return sbuf.str();
}

int main(int argc, char *argv[]) {
  Fraction twothirds(2, 3);
  Fraction threequarters(3, 4);
  Fraction acopy(twothirds);
  Fraction f4 = threequarters;
  std::cout << Fraction::report() << std::endl;
  f4 = twothirds;
  std::cout << Fraction::report() << std::endl;
  f4 = twothirds.multiply(threequarters);
  std::cout << Fraction::report() << std::endl;
  return 0;
}

#include <iostream>
#include <sstream>
#include "fraction.h"

Fraction::Fraction(int n, int d): m_Numer(n), m_Denom(d) {

}

Fraction::Fraction(int n): m_Numer(n), m_Denom(1) {

}

Fraction::Fraction(): m_Numer(1), m_Denom(1) {

}

void Fraction::set(int n, int d) {
  m_Numer = n;
  m_Denom = d;
}

std::string Fraction::toString() const {
  std::ostringstream buf;
  buf << m_Numer << " / " << m_Denom;
  return buf.str();
}

Fraction Fraction::add(const Fraction& other) {
  Fraction f;
  f.m_Numer = (m_Numer * other.m_Denom) + (m_Denom * other.m_Numer);
  f.m_Denom = (m_Denom * other.m_Denom);
  return f;
}

Fraction Fraction::subtract(const Fraction& other) {
  Fraction f;
  f.m_Numer = (m_Numer * other.m_Denom) - (m_Denom * other.m_Numer);
  f.m_Denom = (m_Denom * other.m_Denom);
  return f;
}

Fraction Fraction::multiply(const Fraction& other) {
  Fraction f;
  f.m_Numer = m_Numer * other.m_Numer;
  f.m_Denom = m_Denom * other.m_Denom;
  return f;
}

Fraction Fraction::divide(const Fraction& other) {
  Fraction f;
  f.m_Numer = m_Numer * other.m_Denom;
  f.m_Denom = m_Denom * other.m_Numer;
  return f;
}

double Fraction::toDouble() const {
  return (double)m_Numer / m_Denom;
}

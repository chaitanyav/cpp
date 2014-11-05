#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <string>

class Fraction {
public:
  Fraction(int n, int d);
  Fraction(int n);
  Fraction();
  void set(int n, int d);
  std::string toString() const;
  double toDouble() const;
  Fraction add(const Fraction& other);
  Fraction subtract(const Fraction& other);
  Fraction multiply(const Fraction& other);
  Fraction divide(const Fraction& other);
private:
  int m_Numer, m_Denom;
};

#endif

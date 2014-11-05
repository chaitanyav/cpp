#ifndef _FRACTION_H_
#define _FRACTION_H_

class Fraction {
public:
  void set(int numerator, int denominator);
  double toDouble() const;
  std::string toString() const;
private:
  int m_Numerator;
  int m_Denominator;
};
#endif

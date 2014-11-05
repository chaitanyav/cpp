#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <string>

class Complex {
public:
  Complex(double realPart, double imPart);
  Complex(double realPart);
  Complex();
  std::string toString() const;
private:
  double m_R, m_I;
};
#endif

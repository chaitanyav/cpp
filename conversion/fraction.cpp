#include <iostream>

class Fraction {
  public:
    Fraction(int n): m_Numer(n), m_Denom(1) {
    }
    Fraction(int n, int d): m_Numer(n), m_Denom(d) {
    }

    Fraction times(const Fraction& other) {
      return Fraction(m_Numer * other.m_Numer, m_Denom * other.m_Denom);
    }
  private:
    int m_Numer, m_Denom;
};

int main(int argc, char *argv[]) {
  Fraction frac(8);
  Fraction frac2 = 5;
  frac = 9;
  frac = (Fraction) 7;
  frac = Fraction(6);
  frac = static_cast<Fraction>(6);
  frac = frac2.times(19);
  return 0;
}

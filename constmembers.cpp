#include <iostream>
#include <string>
#include <sstream>

class Point {
  public:
    Point(int px, int py): m_X(px), m_Y(py) {

    }

    void set(int nx, int ny) {
      m_X = nx;
      m_Y = ny;
    }

    std::string toString() const {
      m_Count++;
      std::ostringstream sbuf;
      sbuf <<  "[" << m_X << " , " << m_Y << "]";
      return sbuf.str();
    }

  private:
    int m_X, m_Y;
    mutable int m_Count;
};

int main(int argc, char *argv[]) {
  Point p(1, 1);
  const Point q(2, 2);
  p.set(4, 4);
  std::cout << p.toString() << std::endl;
  return 0;
}

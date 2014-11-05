#ifndef _SUBOBJ_H_
#define _SUBOBJ_H_

class Point {
public:
  Point(int xx, int yy): m_x(xx), m_y(yy) {

  }

  ~Point() {
    std::cout << "Point Destroyed " << "[" << m_x << "," << m_y << "]" << std::endl;
  }
private:
  int m_x, m_y;
};

class Square {
public:
  Square(int ulx, int uly, int lrx, int lry): m_UpperLeft(ulx, uly), m_LowerRight(lrx, lry) {

  }

  Square(const Point& ul, const Point& lr): m_UpperLeft(ul), m_LowerRight(lr) {

  }
private:
  Point m_UpperLeft, m_LowerRight;
};

#endif

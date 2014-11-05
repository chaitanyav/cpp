#include <iostream>
#include "subobj.h"

int main(int argc, char *argv[]) {
  Square sq1(3, 4, 5, 6);
  Point p1(2, 3), p2(8, 9);
  Square sq2(p1, p2);
  return 0;
}

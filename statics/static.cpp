#include "static.h"
#include <iostream>

int Thing::s_Count = 0;

Thing::Thing(int a, int b) : m_First(a), m_Second(b) {
  ++s_Count;
}

Thing::~Thing() {
  --s_Count;
}

void Thing::display() const {
  std::cout << m_First << "$$" << m_Second << std::endl;
}

void Thing::showCount() {
  std::cout << "Count = " << s_Count << std::endl;
}

int main(int argc, char *argv[]) {
  Thing thing(1, 2);
  Thing::showCount();
  return 0;
}

#include <iostream>

int main(int argc, char *argv[]) {
  int *ip = 0;
  delete ip;
  if(ip) {
    std::cout << "non-null" << std::endl;
  } else {
    std::cout << "null" << std::endl;
  }

  ip = new int;
  int *jp = new int(13);
  delete jp;
  delete ip;
  return 0;
}

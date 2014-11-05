#include <iostream>

int main(int argc, char *argv[]) {
  const int THISYEAR = 2014;
  std::string yourName;
  int birthYear;

  std::cout << "What is your name?" << std::endl;
  getline(std::cin, yourName);

  std::cout << "What year were you born?" << std::endl;
  std::cin >> birthYear;
  std::cout << "Your name is " << yourName <<
    " and you are approximately " << (THISYEAR - birthYear) << " years old" << std::endl;
  return 0;
}

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string s1("this "), s2("is a "), s3("string");
  s1 += s2;
  std::string s4 = s1 + s3;
  std::cout << s4 << std::endl;
  std::string s5("The length of that string is ");
  std::cout << s5 << s4.length() << " characters. " << std::endl;
  std::cout << "Enter a sentence: " << std::endl;
  getline(std::cin, s2);
  std::cout << "Here is your sentence: \n" << s2 << std::endl;
  std::cout << "The length of your sentence is: " << s2.length() << std::endl;
  return 0;
}

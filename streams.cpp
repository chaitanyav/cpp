#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char *argv[]) {
  std::ostringstream strbuf;

  int lucky = 7;
  float pi = 3.14;
  double e = 2.71;
  std::cout << "An in-memory stream" << std::endl;
  strbuf << "luckynumber: " << lucky << std::endl << "pi: " << pi << std::endl << "e: " << e << std::endl;
  std::string strval = strbuf.str();
  std::cout << strval;

  std::ofstream outf;
  outf.open("mydata");
  outf << strval;
  outf.close();

  std::ifstream inf;
  std::string newstr;
  inf.open("mydata");
  if(inf) {
    while(! inf.eof()) {
      getline(inf, newstr);
      std::cout << newstr << std::endl;
    }
    inf.close();
  }
  return 0;
}

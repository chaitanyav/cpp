#include <iostream>
long factorial(long n) {
  long fact = 1;
  for(long i = 2; i <= n; i++) {
    fact *= i;
    if(fact < 0) {
      return -1;
    }
  }

  return fact;
}
int main(int argc, char *argv[]) {
  std::cout << "Please enter n: " << std::flush;
  long n;
  std::cin >> n;

  if(n >= 0) {
    long nfact = factorial(n);
    if(nfact < 0) {
      std::cerr << "overflow error: " << n << " is too big. " << std::endl;
    } else {
      std::cout << "factorial(" << n << ") = " << nfact << std::endl;
    }
  } else {
    std::cerr << "Undefined: " << "factorial of a negative number: " << n << std::endl;
  }
  return 0;
}

#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Task A" << std::endl;
  std::cout << "isDivisibleBy(100,25): " << isDivisibleBy(100,25) << std::endl;
  std::cout << "------------------\n";

  std::cout << "Task B" << std::endl;
  std::cout << "isPrime(0): " << isPrime(0) << std::endl;
  std::cout << "------------------\n";

  std::cout << "Task C" << std::endl;
  std::cout << "nextPrime(14): " << nextPrime(14) << std::endl;
  std::cout << "------------------\n";

  std::cout << "Task D" << std::endl;
  std::cout << "countPrimes(0, 10): " << countPrimes(0, 10) << std::endl; //4
  std::cout << "------------------\n";

  std::cout << "Task E" << std::endl;
  std::cout << "isTwinPrime(3): " << isTwinPrime(3) << std::endl;
  std::cout << "------------------\n";

  std::cout << "Task F" << std::endl;
  std::cout << "nextTwinPrime(0): " << nextTwinPrime(0) << std::endl;
  std::cout << "------------------\n";

  std::cout << "Task G" << std::endl;
  std::cout << "largestTwinPrime(5, 18): " << largestTwinPrime(5,18) << std::endl; //17
  std::cout << "------------------\n";

  return 0;
}

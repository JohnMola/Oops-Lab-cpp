#include <iostream>
#include <string>

#include "src/oops.hpp"

int main()
{
  const int value = checkIfValid(1, 10, "Enter a value between 1-10: ", "Wrong. Try Again.");
  std::cout << "The value you chose is: " << value << std::endl;
}

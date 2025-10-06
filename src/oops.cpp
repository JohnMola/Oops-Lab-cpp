#include <string>
#include <iostream>

int checkIfValid(const int lower, const int upper, const std::string& output, const std::string& error)
{
   int value = 0;

   std::cout << output;
   std::cin >> value;

   while (value > upper || value < lower)
   {

      std::cout << error << std::endl;
      std::cout << output;
      std::cin >> value;
   }

   return value;
}

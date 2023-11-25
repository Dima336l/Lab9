#include "numberconversion.h"
#include <iostream>
<<<<<<< HEAD
#include <limits>
=======
#include <string>
#include <limits>
#include <algorithm>

bool is_number(std::string s) {
    return !s.empty() && std::find_if(s.begin(), s.end(), 
        [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}
>>>>>>> bugFix

int main()
{
  char option;
  std::string roman;
  int digits;
  
  do {
  
    std::cout << "\n******** Menu ********\n";
    std::cout << "r : convert Roman numerals to digits\n";
    std::cout << "d : convert digits to Roman numerals\n";
    std::cout << "q : quit\n";
    std::cout << "select an option from above: ";
    std::cin >> option;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer

    if (option == 'r') {
      std::cout << "Enter the Roman numerals to convert to digits: ";
      std::cin >> roman;
      if (romantoint(roman) != 0) {
	std::cout << roman << " in digits is " << romantoint(roman) << '\n';
      } else {
	std::cout << "Invalid input, please enter a valid Roman numeral" << std::endl;
      }
      
    }else if (option == 'd') {
            std::cout << "Enter the digits to convert to Roman numerals: ";
            if (std::cin >> digits) {
                if (digits != 0) {
                    std::cout << digits << " in Roman numerals is " << inttoroman(digits) << '\n';
                } else {
                    std::cout << "Roman numerals representation for zero does not exist." << std::endl;
                }
            } else {
                std::cout << "Invalid input. Please enter a valid number." << std::endl;
                std::cin.clear(); // Clear the fail state
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
            }
    } else if (option != 'q') {
      std::cout << "Invalid option. Please enter r, d or q\n";
    }
  
  } while (option != 'q');

  std::cout << "Goodbye\n";
  
  return 0;
}

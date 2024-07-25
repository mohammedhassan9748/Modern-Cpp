#include <iostream>
#include <iomanip> 

/*
* Task: Dsiplay the Multiplication table.
*/

int main() {
    
    for(int number=1;number<=9; number++) {
        std::cout << "Multiplication table of " << number << std::endl;
        std::cout << "-----------------------" << std::endl;
        for(int multiplier=1;multiplier<=9; multiplier++){
            std::cout << std::setw(2) << number << " x " << multiplier << " = " << std::setw(2) << number*multiplier <<std::endl;
        }
        std::cout << std::endl; // Add an empty line between tables
    }

    return 0;
}

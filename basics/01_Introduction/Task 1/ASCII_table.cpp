#include <iostream>
#include <iomanip>

/*
* Task: Create a table for AscII code.
*/

int main() {
    std::cout << "ASCII Code Table" << std::endl;

    std::cout << "+------+-------+" << std::endl;
    std::cout << "| Char | ASCII |" << std::endl;
    std::cout << "+------+-------+" << std::endl;

    for (unsigned char c = 0; c < 128; c++) {
        if (std::isprint(c)) {
            std::cout << "|  " << c << "   |  " << std::setw(3) << static_cast<int>(c) << "  |" << std::endl;
        } else {
            std::cout << "|      |  " << std::setw(3) << static_cast<int>(c) << "  |" << std::endl;
        }
    }

    std::cout << "+------+-------+" << std::endl;

    return 0;
}

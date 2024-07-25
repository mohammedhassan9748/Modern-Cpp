#include <iostream>
#include <string>

/*
* Task: Calculate the summation of the digits in an integer using string conversion.
*/

int main() {
    int number;
    std::cout << "Please enter an integer: ";
    std::cin >> number;

    std::string numStr = std::to_string(number);

    int sum = 0;
    for (char digit : numStr) {
        if (std::isdigit(digit)) {
            sum += digit - '0'; // Convert char to int and add to sum
        }
    }

    std::cout << "The summation of the digits in " << number << " is: " << sum << std::endl;

    return 0;
}

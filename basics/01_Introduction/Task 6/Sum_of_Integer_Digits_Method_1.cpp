#include <iostream>

/*
* Task: Calculate the summation of the digits in an integer.
*/

int main() {
    int number;
    std::cout << "Please enter an integer: ";
    std::cin >> number;

    int sum = 0;
    int n = number; // To handle negative numbers
    if (n < 0) {
        n = -n; // Make the number positive
    }

    while (n != 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10; // Remove the last digit
    }

    std::cout << "The summation of the digits in " << number << " is: " << sum << std::endl;

    return 0;
}

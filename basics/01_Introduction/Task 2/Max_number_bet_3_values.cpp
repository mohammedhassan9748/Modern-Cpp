#include <iostream>

/*
* Task: Maximum number between three values.
*/

int main() {
    std::cout << "Please Enter 3 Numbers:" << std::endl;

    int x, max;
    std::cin >> x;
    max = x; // Initialize max with the first number

    for (int i = 1; i < 3; ++i) {
        std::cin >> x;
        if (x > max) {
            max = x; // Update max if the current number is greater
        }
    }

    std::cout << "Maximum Number is: " << max << std::endl;
    return 0;
}

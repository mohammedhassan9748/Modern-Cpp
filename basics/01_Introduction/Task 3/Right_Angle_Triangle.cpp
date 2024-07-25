#include <iostream>
#include <cmath> // For std::pow

/*
* Task: Determine if the given three sides form a right-angled triangle.
*/

int main() {
    std::cout << "Please Enter 3 Sides:" << std::endl;

    float a = 0, b = 0, c = 0;

    std::cout << "Side a: "; std::cin >> a; 
    std::cout << "Side b: "; std::cin >> b; 
    std::cout << "Side c: "; std::cin >> c; 

    // Calculate the squares of the sides
    float a2 = std::pow(a, 2);
    float b2 = std::pow(b, 2);
    float c2 = std::pow(c, 2);

    // Check if it's a right-angled triangle using the Pythagorean theorem
    if (std::fabs(c2 - (a2 + b2)) < 1e-6 || std::fabs(a2 - (b2 + c2)) < 1e-6 || std::fabs(b2 - (a2 + c2)) < 1e-6) {
        std::cout << "This is a right-angle triangle" << std::endl;
    } else {
        std::cout << "This is NOT a right-angle triangle" << std::endl;
    }

    return 0;
}

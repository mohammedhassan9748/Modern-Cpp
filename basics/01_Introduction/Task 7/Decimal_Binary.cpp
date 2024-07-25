#include <iostream>
#include <bitset>
#include <string>
#include <algorithm> // for std::reverse

/*
* Task: Decimal to Binary Conversion Using Bitset.
*/

int main() {
    unsigned long decimalInput = 0;
    std::string binaryString = "";
    
    std::cout << "Enter a number in decimals: "; std::cin >> decimalInput;

    // Special case for 0
    if (decimalInput == 0)
        binaryString = "0";
    
    
    // Validate if the input is a valid binary number
    unsigned long divisable = decimalInput;
    while(divisable){
        binaryString += (divisable%2==0?'0':'1');
        divisable/=2;
    }
    std::reverse(binaryString.begin(), binaryString.end());    // Convert binary string to std::bitset
    std::bitset<8> bits(binaryString); // Use 64 as an example, adjust as needed
    
    std::cout << "Binary number entered in Decimal:" << decimalInput << std::endl;
    std::cout << "Binary number entered in Binary:" << bits << std::endl;
    

    return 0;
}
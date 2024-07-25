#include <iostream>
#include <bitset>
#include <string>
#include <sstream>

/*
* Task: Binary to Decimal Conversion Using Bitset.
*/

int main() {
    std::string binaryInput;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryInput;
    
    // Validate if the input is a valid binary number
    bool valid = true;
    for(char c: binaryInput){
        if(c!='0' && c!='1'){
            valid = false;
            break;
        }
        else{
            valid = true;
        }
    }

    if (!valid) {
        std::cout << "Invalid binary number entered.\n" << std::endl;
        return 0;
    }
    
    // Convert binary string to std::bitset
    std::bitset<8> bits(binaryInput); // Use 64 as an example, adjust as needed
    unsigned long num = bits.to_ulong();
    

    std::cout << "Binary number entered in Binary:" << bits << std::endl;
    std::cout << "Binary number entered in Decimal:" << num << std::endl;

    return 0;
}
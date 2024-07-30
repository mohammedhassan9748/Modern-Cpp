#include <iostream>
#include "String.hpp"

int main() {
    // Test Default Constructor
    String str1;
    std::cout << "Testing Default Constructor:" << std::endl;
    std::cout << "Default constructor: ";
    std::cout << "Size = " << str1.size << ", Content = \"" << (str1.str ? str1.str : "nullptr") << "\"" << std::endl << std::endl;

    // Test One Parameter Constructor
    String str2("Hello");
    std::cout << "Testing One Parameter Constructor:" << std::endl;
    std::cout << "One parameter constructor: ";
    std::cout << "Size = " << str2.size << ", Content = \"" << str2.str << "\"" << std::endl << std::endl;

    // Test Copy Constructor
    String str3(str2);
    std::cout << "Testing Copy Constructor:" << std::endl;
    std::cout << "Copy constructor: ";
    std::cout << "Size = " << str3.size << ", Content = \"" << str3.str << "\"" << std::endl << std::endl;

    // Test Move Constructor
    String str4(std::move(str2));
    std::cout << "Testing Move Constructor:" << std::endl;
    std::cout << "Move constructor: ";
    std::cout << "Size = " << str4.size << ", Content = \"" << str4.str << "\"" << std::endl;
    std::cout << "Moved from: Size = " << str2.size << ", Content = \"" << (str2.str ? str2.str : "nullptr") << "\"" << std::endl << std::endl;

    // Test Assignment Operator
    String str5;
    str5 = str3;
    std::cout << "Testing Copy Assignment Operator:" << std::endl;
    std::cout << "Assignment operator: ";
    std::cout << "Size = " << str5.size << ", Content = \"" << str5.str << "\"" << std::endl << std::endl;

    // Test Move Assignment Operator
    String str6;
    str6 = std::move(str3);
    std::cout << "Testing Move Assignment Operator:" << std::endl;
    std::cout << "Move assignment operator: ";
    std::cout << "Size = " << str6.size << ", Content = \"" << str6.str << "\"" << std::endl;
    std::cout << "Moved from: Size = " << str3.size << ", Content = \"" << (str3.str ? str3.str : "nullptr") << "\"" << std::endl << std::endl;

    // Test Append
    std::cout << "Testing Append Method:" << std::endl;
    str5.append(" World!");
    std::cout << "After append: ";
    std::cout << "Size = " << str5.size << ", Content = \"" << str5.str << "\"" << std::endl << std::endl;

    // Test Insert
    std::cout << "Testing Insert Method:" << std::endl;
    str5.insert(6, "Beautiful ");
    std::cout << "After insert: ";
    std::cout << "Size = " << str5.size << ", Content = \"" << str5.str << "\"" << std::endl << std::endl;

    // Test Relational Operators
    String str7("Hello Beautiful World!");
    std::cout << "Testing Relational Operators:" << std::endl;
    std::cout << "Equality: " << (str5 == str7 ? "True" : "False") << std::endl;
    std::cout << "Inequality: " << (str5 != str7 ? "True" : "False") << std::endl;
    std::cout << "Less than: " << (str5 < str7 ? "True" : "False") << std::endl;
    std::cout << "Greater than: " << (str5 > str7 ? "True" : "False") << std::endl;
    std::cout << "Less than or equal: " << (str5 <= str7 ? "True" : "False") << std::endl;
    std::cout << "Greater than or equal: " << (str5 >= str7 ? "True" : "False") << std::endl << std::endl;

    // Test Concatenation with String
    String str8 = str5 + " How are you?";
    std::cout << "Testing Concatenation with String:" << std::endl;
    std::cout << "Concatenation with String: ";
    std::cout << "Size = " << str8.size << ", Content = \"" << str8.str << "\"" << std::endl << std::endl;

    // Test Concatenation with C-String
    String str9 = str5 + " Let's test!";
    std::cout << "Testing Concatenation with C-string:" << std::endl;
    std::cout << "Concatenation with C-string: ";
    std::cout << "Size = " << str9.size << ", Content = \"" << str9.str << "\"" << std::endl << std::endl;

    // Test Concatenation with C-String on Left
    String str10 = "Prefix " + str5;
    std::cout << "Testing Concatenation with C-string on left:" << std::endl;
    std::cout << "Concatenation with C-string on left: ";
    std::cout << "Size = " << str10.size << ", Content = \"" << str10.str << "\"" << std::endl << std::endl;

    // Test Swap
    std::cout << "Testing Swap Function:" << std::endl;
    swap(str9, str10);
    std::cout << "After swap:" << std::endl;
    std::cout << "str9: Size = " << str9.size << ", Content = \"" << str9.str << "\"" << std::endl;
    std::cout << "str10: Size = " << str10.size << ", Content = \"" << str10.str << "\"" << std::endl << std::endl;

    // Test Clear
    std::cout << "Testing Clear Method:" << std::endl;
    str10.clear();
    std::cout << "After clear: ";
    std::cout << "Size = " << str10.size << ", Content = \"" << (str10.str ? str10.str : "nullptr") << "\"" << std::endl;

    return 0;
}

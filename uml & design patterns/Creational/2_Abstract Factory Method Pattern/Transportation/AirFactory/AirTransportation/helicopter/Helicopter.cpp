#include <iostream>
#include "Helicopter.hpp"

Helicopter::Helicopter(/* args */)
{
    std::cout << "Helicopter Constructed" << std::endl;
}

double Helicopter::getPrice(void)
{
    // Add Your Code
    return 60000.99;
}
double Helicopter::getTax(void)
{
    // Add Your Code
    return 30.91;
}
unsigned int Helicopter::getDuration(void)
{
    // Add Your Code
    return 120;
}

Helicopter::~Helicopter()
{
        std::cout << "Helicopter Destructed" << std::endl;

}

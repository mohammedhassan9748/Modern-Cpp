#include <iostream>
#include "Aeroplane.hpp"

Aeroplane::Aeroplane(/* args */)
{
    std::cout << "Aeroplane Constructed" << std::endl;
}

double Aeroplane::getPrice(void)
{
    // Add Your Code
    return 5555555.99;
}
double Aeroplane::getTax(void)
{
    // Add Your Code
    return 555.91;
}
unsigned int Aeroplane::getDuration(void)
{
    // Add Your Code
    return 55;
}

Aeroplane::~Aeroplane()
{
        std::cout << "Aeroplane Destructed" << std::endl;

}

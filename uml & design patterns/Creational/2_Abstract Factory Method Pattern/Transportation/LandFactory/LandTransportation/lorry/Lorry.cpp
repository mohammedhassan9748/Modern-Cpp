#include <iostream>
#include "Lorry.hpp"

Lorry::Lorry(/* args */)
{
    std::cout << "Lorry Constructed" << std::endl;
}

double Lorry::getPrice(void)
{
    // Add Your Code
    return 60000.99;
}
double Lorry::getTax(void)
{
    // Add Your Code
    return 30.91;
}
unsigned int Lorry::getDuration(void)
{
    // Add Your Code
    return 120;
}

Lorry::~Lorry()
{
        std::cout << "Lorry Destructed" << std::endl;

}

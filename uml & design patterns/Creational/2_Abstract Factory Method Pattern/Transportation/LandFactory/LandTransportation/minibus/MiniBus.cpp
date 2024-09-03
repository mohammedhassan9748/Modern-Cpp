#include <iostream>
#include "minibus.hpp"

MiniBus::MiniBus(/* args */)
{
    std::cout << "MiniBus Constructed" << std::endl;
}

double MiniBus::getPrice(void)
{
    // Add Your Code
    return 60000.99;
}
double MiniBus::getTax(void)
{
    // Add Your Code
    return 30.91;
}
unsigned int MiniBus::getDuration(void)
{
    // Add Your Code
    return 120;
}

MiniBus::~MiniBus()
{
        std::cout << "MiniBus Destructed" << std::endl;

}

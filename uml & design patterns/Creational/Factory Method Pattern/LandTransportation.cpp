#include <iostream>
#include "LandTransportation.hpp"

LandTransportation::LandTransportation(/* args */)
{
    std::cout << "Land Constructed" << std::endl;
}

double LandTransportation::getPrice(void)
{
    // Add Your Code
    return 60000.99;
}
double LandTransportation::getTax(void)
{
    // Add Your Code
    return 30.91;
}
unsigned int LandTransportation::getDuration(void)
{
    // Add Your Code
    return 120;
}

LandTransportation::~LandTransportation()
{
        std::cout << "Land Desstructed" << std::endl;

}

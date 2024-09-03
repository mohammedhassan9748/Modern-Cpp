#include <iostream>
#include "AirTransportation.hpp"

AirTransportation::AirTransportation(/* args */)
{
    std::cout << "Air Constructed" << std::endl;
}

double AirTransportation::getPrice(void)
{
    // Add Your Code
    return 30000.99;
}
double AirTransportation::getTax(void)
{
    // Add Your Code
    return 20.32;
}
unsigned int AirTransportation::getDuration(void)
{
    // Add Your Code
    return 60;
}

AirTransportation::~AirTransportation()
{
    std::cout << "Air Destructed" << std::endl;
}

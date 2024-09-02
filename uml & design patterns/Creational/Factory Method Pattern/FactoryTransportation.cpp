#include <iostream>
#include "FactoryTransportation.hpp"
#include "LandTransportation.hpp"
#include "AirTransportation.hpp"

FactoryTransportation::FactoryTransportation(/* args */)
{
    std::cout << "Factory Constructed" << std::endl;
}

std::unique_ptr<Transportation> FactoryTransportation::createTransportation(TransportationMethod transportMethod)
{
    std::unique_ptr<Transportation> ptrTransportation;
    switch (transportMethod)
    {
    case TransportationMethod::LAND_TRANSPORT:
        /* code */
        ptrTransportation = std::make_unique<LandTransportation>();
        break;
    
    case TransportationMethod::AIR_TRANSPORT:
        /* code */
        ptrTransportation = std::make_unique<AirTransportation>();
        break;
    
    default:
        ptrTransportation = nullptr;
        break;
    }

    return ptrTransportation;
}


FactoryTransportation::~FactoryTransportation()
{
    std::cout << "Facotry Destructed" << std::endl;
}
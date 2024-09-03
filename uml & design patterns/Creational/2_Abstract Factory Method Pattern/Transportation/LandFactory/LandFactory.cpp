#include <iostream>
#include "LandFactory.hpp"
#include "LandTransportation/minibus/MiniBus.hpp"
#include "LandTransportation/lorry/Lorry.hpp"

LandFactory::LandFactory(/* args */)
{
    std::cout << "Land Factory Constructed" << std::endl;
}

std::unique_ptr<LandTransportation> LandFactory::createLandTransportation(LandTransportationMethod transportMethod)
{
    std::unique_ptr<LandTransportation> ptrLandTransportation;
    switch (transportMethod)
    {
    case LandTransportationMethod::MINI_BUS:
        /* code */
        ptrLandTransportation = std::make_unique<MiniBus>();
        break;
    
    case LandTransportationMethod::LORRY:
        /* code */
        ptrLandTransportation = std::make_unique<Lorry>();
        break;
    
    default:
        ptrLandTransportation = nullptr;
        break;
    }

    return ptrLandTransportation;
}


LandFactory::~LandFactory()
{
    std::cout << "Land Factory Destructed" << std::endl;
}
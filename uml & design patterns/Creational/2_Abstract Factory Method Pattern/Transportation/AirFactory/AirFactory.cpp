#include <iostream>
#include "AirFactory.hpp"
#include "AirTransportation/aeroplane/Aeroplane.hpp"
#include "AirTransportation/helicopter/Helicopter.hpp"

AirFactory::AirFactory(/* args */)
{
    std::cout << "Air Factory Constructed" << std::endl;
}
 
std::unique_ptr<AirTransportation> AirFactory::createAirTransportation(AirTransportationMethod transportMethod)
{
    std::unique_ptr<AirTransportation> ptrAirTransportation;
    switch (transportMethod)
    {
    case AirTransportationMethod::AEROPLANE:
        /* code */
        ptrAirTransportation = std::make_unique<Aeroplane>();
        break;
    
    case AirTransportationMethod::HELICOPTER:
        /* code */
        ptrAirTransportation = std::make_unique<Helicopter>();
        break;
    
    default:
        ptrAirTransportation = nullptr;
        break;
    }

    return ptrAirTransportation;
}


AirFactory::~AirFactory()
{
    std::cout << "Air Factory Destructed" << std::endl;
}
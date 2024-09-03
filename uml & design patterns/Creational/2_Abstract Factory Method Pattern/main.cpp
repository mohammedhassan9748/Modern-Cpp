#include <iostream>
#include "Transportation/Transportation.hpp"
#include "TransportationFactory.hpp"

int main()
{
    TransportationFactory Trans;

    auto MyAeroplane = Trans.createTransportation<AbstractFactoryAirTransportation>()->createAirTransportation(AirTransportationMethod::AEROPLANE);

    std::cout << MyAeroplane->getPrice() << '\n'
            << MyAeroplane->getTax() << '\n'
            << MyAeroplane->getDuration() << std::endl;
    
}
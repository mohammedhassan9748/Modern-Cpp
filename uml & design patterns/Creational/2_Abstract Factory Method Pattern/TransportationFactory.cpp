#include <iostream>
#include "TransportationFactory.hpp"
#include "Transportation/AirFactory/AirFactory.hpp"
#include "Transportation/LandFactory/LandFactory.hpp"

TransportationFactory::TransportationFactory(/* args */)
{
    std::cout << "Main Factory Constructed" << std::endl;
}

template<>
std::unique_ptr<AbstractFactoryAirTransportation> TransportationFactory::createTransportation()
{
    std::unique_ptr<AbstractFactoryAirTransportation> ptrTransportation = std::make_unique<AirFactory>();;

    return ptrTransportation;
}

template<>
std::unique_ptr<AbstractFactoryLandTransportation> TransportationFactory::createTransportation()
{
    std::unique_ptr<AbstractFactoryLandTransportation> ptrTransportation = std::make_unique<LandFactory>();;

    return ptrTransportation;
}



TransportationFactory::~TransportationFactory()
{
    std::cout << "Main Factory Destructed" << std::endl;
}
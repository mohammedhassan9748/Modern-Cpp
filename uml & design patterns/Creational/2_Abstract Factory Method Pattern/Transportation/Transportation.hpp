#ifndef _TRANSPORTATION_H_
#define _TRANSPORTATION_H_

#include <memory>
#include "AirFactory/AirTransportation/AirTransportation.hpp"
#include "LandFactory/LandTransportation/LandTransportation.hpp"
#include "AirFactory/AirMethods.hpp"
#include "LandFactory/LandMethods.hpp"

class AbstractFactoryAirTransportation 
{
private:
    /* data */

public:
    AbstractFactoryAirTransportation(/* args */)
    {

    }
    
    virtual std::unique_ptr<AirTransportation> createAirTransportation(AirTransportationMethod) = 0;

    virtual ~AbstractFactoryAirTransportation()
    {
        
    }
};

class AbstractFactoryLandTransportation 
{
private:
    /* data */

public:
    AbstractFactoryLandTransportation(/* args */)
    {

    }

    virtual std::unique_ptr<LandTransportation> createLandTransportation(LandTransportationMethod) = 0;

    virtual ~AbstractFactoryLandTransportation()
    {
        
    }
};

#endif // !_TRANSPORTATION_H_


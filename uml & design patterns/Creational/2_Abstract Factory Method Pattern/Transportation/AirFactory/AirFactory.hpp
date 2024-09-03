#ifndef _AIR_FACTORY_H_
#define _AIR_FACTORY_H_

#include <memory>
#include "../Transportation.hpp"
#include "AirTransportation/AirTransportation.hpp"
#include "AirMethods.hpp"



class AirFactory : public AbstractFactoryAirTransportation
{
private:
    /* data */

public:
    AirFactory(/* args */);

    std::unique_ptr<AirTransportation> createAirTransportation(AirTransportationMethod) override;

    ~AirFactory();
};

#endif // ! _AIR_FACTORY_H_

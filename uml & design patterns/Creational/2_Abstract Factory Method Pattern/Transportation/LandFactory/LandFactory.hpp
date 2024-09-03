#ifndef _LAND_FACTORY_H_
#define _LAND_FACTORY_H_

#include <memory>
#include "LandTransportation/LandTransportation.hpp"
#include "../Transportation.hpp"
#include "LandMethods.hpp"

class LandFactory : public AbstractFactoryLandTransportation
{
private:
    /* data */

public:
    LandFactory(/* args */);

    std::unique_ptr<LandTransportation> createLandTransportation(LandTransportationMethod) override;

    ~LandFactory();
};

#endif // ! _LAND_FACTORY_H_

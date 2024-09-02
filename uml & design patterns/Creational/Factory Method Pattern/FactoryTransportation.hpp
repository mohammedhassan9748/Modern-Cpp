#ifndef _FACTORY_TRANSPORTATION_H_
#define _FACTORY_TRANSPORTATION_H_

#include <memory>
#include "Transportation.hpp"

enum class TransportationMethod {
    LAND_TRANSPORT,
    AIR_TRANSPORT
};

class FactoryTransportation
{
private:
    /* data */

public:
    FactoryTransportation(/* args */);

    std::unique_ptr<Transportation> createTransportation(TransportationMethod);

    ~FactoryTransportation();
};




#endif // ! _FACTORY_TRANSPORTATION_H_

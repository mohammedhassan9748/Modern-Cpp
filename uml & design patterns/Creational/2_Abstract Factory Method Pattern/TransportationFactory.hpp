#ifndef _FACTORY_TRANSPORTATION_H_
#define _FACTORY_TRANSPORTATION_H_

#include <memory>

enum class TransportationMethod {
    LAND_TRANSPORT,
    AIR_TRANSPORT
};

class TransportationFactory
{
private:
    /* data */

public:
    TransportationFactory(/* args */);

    template <typename T>
    std::unique_ptr<T> createTransportation();

    ~TransportationFactory();
};

#endif // ! _FACTORY_TRANSPORTATION_H_

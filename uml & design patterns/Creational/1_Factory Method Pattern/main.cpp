#include <iostream>
#include "FactoryTransportation.hpp"

int main()
{
    FactoryTransportation Trans;

    auto airTransport = 
    Trans.createTransportation(TransportationMethod::AIR_TRANSPORT);

    std::cout << airTransport->getPrice() << '\n'
            << airTransport->getTax() << '\n'
            << airTransport->getDuration() << std::endl;
    
}
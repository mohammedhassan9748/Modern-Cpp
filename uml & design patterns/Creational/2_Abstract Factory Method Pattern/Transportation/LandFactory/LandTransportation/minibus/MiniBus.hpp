#ifndef _MINI_BUS_H_
#define _MINI_BUS_H_

#include "../LandTransportation.hpp"

class MiniBus : public LandTransportation
{
private:
    /* data */
public:
    MiniBus(/* args */);
    
    double getPrice(void) override;
    double getTax(void) override;
    unsigned int getDuration(void) override;

    ~MiniBus();
};


#endif // ! _MINI_BUS_H_



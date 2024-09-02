#ifndef _LAND_TRANSPORTATION_H_
#define _LAND_TRANSPORTATION_H_

#include "Transportation.hpp"

class LandTransportation : public Transportation
{
private:
    /* data */
public:
    LandTransportation(/* args */);
    
    double getPrice(void) override;
    double getTax(void) override;
    unsigned int getDuration(void) override;

    ~LandTransportation();
};


#endif // ! _LAND_TRANSPORTATION_H_



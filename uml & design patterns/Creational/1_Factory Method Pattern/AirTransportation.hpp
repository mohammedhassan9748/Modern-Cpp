#ifndef _AIR_TRANSPORTATION_H_
#define _AIR_TRANSPORTATION_H_

#include "Transportation.hpp"

class AirTransportation : public Transportation
{
private:
    /* data */
public:
    AirTransportation(/* args */);
    
    double getPrice(void) override;
    double getTax(void) override;
    unsigned int getDuration(void) override;

    ~AirTransportation() override;
};


#endif // ! _AIR_TRANSPORTATION_H_

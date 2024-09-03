#ifndef _HELICOPTER_H_
#define _HELICOPTER_H_

#include "../AirTransportation.hpp"

class Helicopter : public AirTransportation
{
private:
    /* data */
public:
    Helicopter(/* args */);
    
    double getPrice(void) override;
    double getTax(void) override;
    unsigned int getDuration(void) override;

    ~Helicopter();
};


#endif // ! _HELICOPTER_H_



#ifndef _LORRY_H_
#define _LORRY_H_

#include "./../LandTransportation.hpp"

class Lorry : public LandTransportation
{
private:
    /* data */
public:
    Lorry(/* args */);
    
    double getPrice(void) override;
    double getTax(void) override;
    unsigned int getDuration(void) override;

    ~Lorry();
};


#endif // ! _LORRY_H_


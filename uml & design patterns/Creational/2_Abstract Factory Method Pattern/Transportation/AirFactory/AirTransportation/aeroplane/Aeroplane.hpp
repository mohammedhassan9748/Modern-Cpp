#ifndef _AEROPLANE_H_
#define _AEROPLANE_H_

#include "./../AirTransportation.hpp"

class Aeroplane : public AirTransportation
{
private:
    /* data */
public:
    Aeroplane(/* args */);
    
    double getPrice(void) override;
    double getTax(void) override;
    unsigned int getDuration(void) override;

    ~Aeroplane();
};


#endif // ! _AEROPLANE_H_


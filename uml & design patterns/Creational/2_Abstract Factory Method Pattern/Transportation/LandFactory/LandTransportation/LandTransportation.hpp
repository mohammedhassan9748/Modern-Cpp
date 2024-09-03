#ifndef _LAND_TRANSPORTATION_H_
#define _LAND_TRANSPORTATION_H_

class LandTransportation
{
private:
    /* data */
public:
    LandTransportation(/* args */);
    
    virtual double getPrice(void) = 0;
    virtual double getTax(void) = 0;
    virtual unsigned int getDuration(void) = 0;

    virtual ~LandTransportation() = 0;
};


#endif // ! _LAND_TRANSPORTATION_H_



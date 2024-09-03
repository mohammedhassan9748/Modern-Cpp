#ifndef _AIR_TRANSPORTATION_H_
#define _AIR_TRANSPORTATION_H_

class AirTransportation
{
private:
    /* data */
public:
    AirTransportation(/* args */);
    
    virtual double getPrice(void) = 0;
    virtual double getTax(void) = 0;
    virtual unsigned int getDuration(void) = 0;

    virtual ~AirTransportation() = 0;
};


#endif // ! _AIR_TRANSPORTATION_H_



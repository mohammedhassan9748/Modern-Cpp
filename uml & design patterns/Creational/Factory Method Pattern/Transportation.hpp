#ifndef _TRANSPORTATION_H_
#define _TRANSPORTATION_H_

class Transportation 
{
private:
    /* data */

public:
    Transportation(/* args */)
    {

    }
    
    virtual double getPrice(void) = 0;
    virtual double getTax(void) = 0;
    virtual unsigned int getDuration(void) = 0;

    virtual ~Transportation()
    {
        
    }
};

#endif // !_TRANSPORTATION_H_
#ifndef _H_TRIANGLE
#define _H_TRIANGLE

#include "Shape.hpp"

class Triangle : public Shape
{
public:
    Triangle(); // Constructor
    ~Triangle(); // Destructor

    void Draw(void) const override; 

private:

};

#endif // !_H_TRIANGLE

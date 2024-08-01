#ifndef _H_RECTANGLE
#define _H_RECTANGLE

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    Rectangle(); // Constructor
    ~Rectangle(); // Destructor

    void Draw(void) const override; 

private:

};

#endif // !_H_RECTANGLE

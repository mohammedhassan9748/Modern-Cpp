#ifndef _H_CIRCLE
#define _H_CIRCLE

#include "Shape.hpp"

class Circle : public Shape
{
private:
    /* data */
public:

    Circle(/* args */);
    ~Circle();

    void Draw(void) const override;
};

#endif // !_H_CIRCLE
// !_H_RECTANGLE

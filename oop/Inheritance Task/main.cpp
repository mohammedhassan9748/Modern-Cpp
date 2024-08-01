#include "Shape.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"


int main()
{
    Shape* Shape_Ptr;
    Circle cir;
    Triangle tri;
    Rectangle rect;
    
    Shape_Ptr = &cir;
    Shape_Ptr->Draw();

    Shape_Ptr = &tri;
    Shape_Ptr->Draw();

    Shape_Ptr = &rect;
    Shape_Ptr->Draw();

    return 0;
}


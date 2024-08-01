#ifndef _H_SHAPE
#define _H_SHAPE


class Shape
{
private:

protected:
    
public:
    Shape() = default;

    virtual void Draw(void) const = 0; // Pure virtual function to make Shape abstract

    virtual ~Shape() = default; // Virtual destructor with a default implementation
};


#endif // !_H_SHAPE
// !_H_SHAPE

#include <iostream>
using namespace std;

class Wektor2D
{
private:
    double X;
    double Y;

public:
    Wektor2D(double x = 0., double y = 0.)
    {
        X = x;
        Y = y;
    };
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
    };
    
    double getX() { return X; };
    double getY() { return Y; };


    void   setX(double x) { X = x; };
    void   setY(double y) { Y = y; };

    

    Wektor2D operator+(const Wektor2D &v1)
    {
        Wektor2D sum;
        sum.X = X + v1.X;
        sum.Y = Y + v1.Y;
        return sum;
    };

    double operator*(const Wektor2D &v1) 
    {
        return X * v1.X + Y * v1.Y; 
    };

};
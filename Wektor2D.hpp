class Wektor2D
{
public:
    Wektor2D()
    {
        wspX = .0;
        wspY = .0;
    }

    Wektor2D(double xx, double yy)
    {
        wspX = xx;
        wspY = yy;
    }

    void   setX(double X) 
    { 
        wspX = X; 
    };

    double getX() 
    { 
        return wspX; 
    };

    void   setY(double Y) 
    { 
        wspY = Y; 
    };

    double getY() 
    { 
        return wspY; 
    };

    friend Wektor2D operator+(Wektor2D vec_1, Wektor2D vec_2)
    {
        return Wektor2D(vec_1.getX() + vec_2.getX(), vec_1.getY() + vec_2.getY());
    };

    friend double operator*(Wektor2D vec_1, Wektor2D vec_2)
    {
        return vec_1.getX() * vec_2.getX() + vec_1.getY() * vec_2.getY();
    };

private:
    double wspX;
    double wspY;
};
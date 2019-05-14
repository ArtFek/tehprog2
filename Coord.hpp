
#ifndef Coord_hpp
#define Coord_hpp

#include <stdio.h>

#endif /* Coord_hpp */
class Coord
{
    int x;
    int y;
    int z;
    int sign;
public:
    Coord();
    Coord(int x,int y,int z);
    explicit Coord(const Coord& a);
    ~Coord();
    Coord& operator++();
    friend Coord& operator++(Coord& op,int);
    friend Coord& operator--( Coord& op);
    Coord& operator--(int);
    void print();
    void setx(int a){x = a;}
    void sety(int a){y = a;}
    void setz(int a){z = a;}
    int getx(){return x;}
    int gety(){return y;}
    int getz(){return z;}
    int getsign(){return sign;}
    int maximum();
    int minimum();
   
};


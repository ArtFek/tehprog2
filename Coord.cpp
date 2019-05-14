
#include "Coord.hpp"
#include <iostream>

using namespace std;
Coord::Coord()
{
    x=y=z=0;
    sign = 1;
}
Coord::Coord(int x,int y,int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
    sign = 1;
}
Coord::Coord(const Coord &a)
{
    x=a.x;
    y=a.y;
    z=a.z;
    sign = 1;
}
Coord::~Coord()
{
       x=y=z=0;
    cout<<"Объект Coord удален"<<endl;
}
void Coord::print()
{
    cout<<"Координата x: "<<x<<endl<<"Координата y: "<<y<<endl<<"Координата z: "<<z<<endl;
}
Coord& Coord::operator++()
{
    cout<<"Введите координату, которую хотите увеличить"<<endl;
    char vibor;
    cin>>vibor;
    switch (vibor) {
        case 'x':
        {
            cout<<"На сколько увеличить переменную x?"<<endl;
            int tmp;
            cin>>tmp;
            x+=tmp;
            break;
        }
        case 'y':
        {
            cout<<"На сколько увеличить переменную y?"<<endl;
            int tmp;
            cin>>tmp;
            y+=tmp;
            break;
        }
        case 'z':
        {
            cout<<"На сколько увеличить переменную z?"<<endl;
            int tmp;
            cin>>tmp;
            z+=tmp;
            break;
        }
        default:
            break;
    }
    return *this;
};
Coord& operator++(Coord& op, int)
{
    
    
    cout<<"Введите координату, которую хотите увеличить"<<endl;
    char vibor;
    cin>>vibor;
    switch (vibor) {
        case 'x':
        {
            op.setx(op.getx()+op.maximum());
            break;
        }
        case 'y':
        {
            op.sety(op.gety()+op.maximum());
            break;
        }
        case 'z':
        {
            op.setz(op.getz()+op.maximum());
            break;
        }
        default:
            break;
    }
    return op;
}
Coord& operator--( Coord& op)
{
    
    cout<<"Введите координату, которую хотите уменьшить"<<endl;
    char vibor;
    cin>>vibor;
    switch (vibor) {
        case 'x':
        {
            cout<<"На сколько уменьшить переменную x?"<<endl;
            int tmp;
            cin>>tmp;
            op.setx(op.getx()-tmp);
            break;
        }
        case 'y':
        {
            cout<<"На сколько уменьшить переменную у?"<<endl;
            int tmp;
            cin>>tmp;
            op.sety(op.gety()-tmp);
            break;
        }
        case 'z':
        {
            cout<<"На сколько уменьшить переменную z?"<<endl;
            int tmp;
            cin>>tmp;
            op.setz(op.getz()-tmp);
            break;
        }
        default:
            break;
    }
    return op;
}
Coord& Coord::operator--(int)
{
    cout<<"Введите координату, которую хотите увеличить"<<endl;
    char vibor;
    cin>>vibor;
    switch (vibor) {
        case 'x':
        {
            x+=this->minimum();
            break;
        }
        case 'y':
        {
            y+=this->minimum();
            break;
        }
        case 'z':
        {
            z+=this->minimum();
            break;
        }
        default:
            break;
    }
    return *this;
}
int Coord:: maximum()
{
    int max;
    if (x>y)
    {
        if (x>z)
        {
            max = x;
        }
        else
        {
            max = z;
        }
    }
    else
    {
        if(y>z)
            max = y;
        else
            max = z;
    }
    return max;
}
int Coord:: minimum()
{
    int min;
    if (x<y)
    {
        if (x<z)
        {
            min = x;
        }
        else
        {
            min = z;
        }
    }
    else
    {
        if(y<z)
            min = y;
        else
            min = z;
    }
    return min;
}

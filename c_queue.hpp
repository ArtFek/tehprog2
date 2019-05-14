
#ifndef c_queue_hpp
#define c_queue_hpp

#include <stdio.h>

#endif /* c_queue_hpp */
#include "Node.h"
class List
{
    Node *head;
    int Num;
public:
    void sethead(Node *op) { head = op; }
    List();
    void print();
    void create();
    List& operator+(const List& op2);
    List& operator-(const List& op2);
    List& operator*(const List& op2);
    List& operator/(const List& op2);
    List& operator+=(int a);
    List& operator-=(int a);
    List& operator/=(int a);
    List& operator*=(int a);
    int getNum() { return Num; }
};

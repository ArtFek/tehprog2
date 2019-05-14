

#include "c_queue.hpp"
#include <iostream>
#include <ctime>
using namespace std;
List::List()
{
    Num = 0;
    long ltime;
    int stime;
    ltime = time(NULL);
    stime = (unsigned int)ltime / 2;
    srand(stime);
    head = new Node;
    head->data = rand()%100+1;
    head->next = nullptr;
}
void List::create()
{
    long ltime;
    int stime;
    ltime = time(NULL);
    stime = (unsigned int)ltime / 2;
    srand(stime);
    int tmp = rand()%30+5;
    for (int i = 0; i <  tmp - 1; ++i)
    {
        Node *tmp, *p;
        p = head->next;
        tmp = new Node;
        head->next = tmp;
        tmp->data = rand()%100+1;
        tmp->next = p;
    }
    Num = tmp;
} void List::print()
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout<<tmp->data<<" « ";
        tmp = tmp->next;
    }
    cout<<endl;
}
List& List :: operator+(const List& op2)
{
    Node *tmp_1 = head;
    Node *tmp_2 = op2.head;
    int a;
    if(Num>op2.Num)
    {
        a = op2.Num;
    }
    else
    {
        a = Num;
    }
    for(int i = 0;i<a;++i)
    {
        tmp_1->data+=tmp_2->data;
        tmp_1=tmp_1->next;
        tmp_2=tmp_2->next;
    }
    return *this;
}
List& List ::operator-(const List& op2)
{
    int a = this->Num>op2.Num?op2.Num:this->Num;
    Node *tmp_1 = head;
    Node *tmp_2 = op2.head;
    
    for(int i = 0;i<a;++i)
    {
        tmp_1->data-=tmp_2->data;
        tmp_1=tmp_1->next;
        tmp_2=tmp_2->next;
    }
    return *this;
}
List& List ::operator*(const List& op2)
{
        int a = this->Num>op2.Num?op2.Num:this->Num;
    Node *tmp_1 = head;
    Node *tmp_2 = op2.head;
    for(int i = 0;i<a;++i)
    {
        tmp_1->data*=tmp_2->data;
        tmp_1=tmp_1->next;
        tmp_2=tmp_2->next;
    }
    return *this;
}
List& List ::operator/(const List& op2)
{
        int a = this->Num>op2.Num?op2.Num:this->Num;
    Node *tmp_1 = head;
    Node *tmp_2 = op2.head;
    for(int i = 0;i<a;++i)
    {
        tmp_1->data/=tmp_2->data;
        tmp_1=tmp_1->next;
        tmp_2=tmp_2->next;
    }
    return *this;
}
List& List ::operator+=(int a)
{
    
    Node *tmp_1 = head;
  
    for(int i = 0;i<Num;++i)
    {
        tmp_1->data+=a;
        tmp_1=tmp_1->next;
    
    }
    return *this;
}
List& List ::operator-=(int a)
{
    
    Node *tmp_1 = head;

    for(int i = 0;i<Num;++i)
    {
        tmp_1->data-=a;
        tmp_1=tmp_1->next;
       
    }
    return *this;
}
List& List ::operator*=(int a)
{
    
    Node *tmp_1 = head;
    
    for(int i = 0;i<Num;++i)
    {
        tmp_1->data*=a;
        tmp_1=tmp_1->next;
        
    }
    return *this;
}
List& List ::operator/=(int a)
{
    
    Node *tmp_1 = head;
    
    for(int i = 0;i<Num;++i)
    {
        tmp_1->data/=a;
        tmp_1=tmp_1->next;
    }
    return *this;
}

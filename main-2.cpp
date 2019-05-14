

#include <iostream>
#include "Coord.hpp"
#include "c_queue.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned vibor;
    Coord *obj1;
    Coord *obj2;
    List *obc1;
    List *obc2;
    bool exit = true;
    do
    {
        cout<<"Выберите действие: "<<endl;
        cout<<"1-создать объект класса Coord"<<endl;
        cout<<"2-создать объект класса Coord и задать ему параметры"<<endl;
        cout<<"3 - создать объект-копию класса Coord"<<endl;
        cout<<"4 - выполнить перегруженный оператор префиксного инкремента"<<endl;
        cout<<"5 - выполнить перегруженный оператор постфиксного инкремента"<<endl;
        cout<<"6 - выполнить перегруженный оператор префиксного декремента"<<endl;
        cout<<"7 - выполнить перегруженный оператор постфиксного декремента"<<endl;
        cout<<"8 - создать объект класса циклическая очередь"<<endl;
        cout<<"9 - выполнить оператор бинарный +(прибавить второй объект)"<<endl;
        cout<<"10 - выполнить оператор бинарынй - (вычесть второй объект)"<<endl;
        cout<<"11 - выполнить оператор *(умножить на объект)"<<endl;
        cout<<"12 - выполнить оператор /(поделить на объект)"<<endl;
        cout<<"13 - выполнить оператор +=(прибавляет число)"<<endl;
        cout<<"14 - выполнить оператор -=(вычитает число)"<<endl;
        cout<<"15 - выполнить оператор *=(умножает на число)"<<endl;
        cout<<"16 - выполнить оператор /=(делит на число)"<<endl;
        cout<<"17 - выход из программы"<<endl;
        cout<<endl;
        cin>>vibor;
    switch (vibor) {
        case 1:
        {
            obj1 = new Coord;
            cout<<"Объект создан"<<endl;
            break;
        }
            
        case 2:
        {
            int tmp_x;
            int tmp_y;
            int tmp_z;
            cout<<"Введите x"<<endl;
            cin>>tmp_x;
            cout<<"Введите y"<<endl;
            cin>>tmp_y;
            cout<<"Введите z"<<endl;
            cin>>tmp_z;
            obj1  = new Coord(tmp_x,tmp_y,tmp_z);
            cout<<"Объект с параметрами создан"<<endl;
            break;
        }
                    case 3:
        {
            if(obj1->getsign()!=0)
            {
                cout<<"Базовый объект не создавался, создайте его"<<endl;
                break;
            }
            obj2 = new Coord(*obj1);
            cout<<"Копия объекта создана"<<endl;
            break;
        }
            
        case 4:
        {
            if(obj1->getsign()==0)
            {
                cout<<"Объект не создавался, создайте его"<<endl;
                break;
            }
            cout<<"Объект до изменений"<<endl;
            obj1->print();
            ++*obj1;
            cout<<"Объект после изменений"<<endl;
            obj1->print();
            break;
        }
            
        case 5:
        {
            if(obj1->getsign()==0)
            {
                cout<<"Объект не создавался, создайте его"<<endl;
                break;
            }
            cout<<"Объект до изменений"<<endl;
            obj1->print();
           
            (*obj1)++;
            cout<<"Объект после изменений"<<endl;
            obj1->print();
            break;
        }
        case 6:
        {
            if(obj1->getsign()==0)
            {
                cout<<"Объект не создавался, создайте его"<<endl;
                break;
            }
            cout<<"Объект до изменений"<<endl;
            obj1->print();
            --*obj1;
            cout<<"Объект после изменений"<<endl;
            obj1->print();
            break;
        }
        case 7:
        {
            if(obj1->getsign()==0)
            {
                cout<<"Объект не создавался, создайте его"<<endl;
                break;
            }
            cout<<"Объект до изменений"<<endl;
            obj1->print();
            (*obj1)--;
            cout<<"Объект после изменений"<<endl;
            obj1->print();
            break;
        }
        case 8:
        {
            obc1 = new List;
            obc1->create();
            cout<<"Объект создан"<<endl;
            obc1->print();
             break;
        }
        case 9:
        {
            obc2 = new List;
            obc2->create();
            cout<<"Для демонстрации работы программы был создан объект с рандомными характеристиками:"<<endl;
            obc2->print();
            cout<<"Исходный объект до операции:"<<endl;
            obc1->print();
            *obc1 = *obc1+*obc2;
            cout<<"Объект после операции:"<<endl;
            obc1->print();
            delete obc2;
            obc2=nullptr;
         break;
        }
        case 10:
        {
            obc2 = new List;
            obc2->create();
            cout<<"Для демонстрации работы программы был создан объект с рандомными характеристиками:"<<endl;
            obc2->print();
            cout<<"Исходный объект до операции:"<<endl;
            obc1->print();
            *obc1 = *obc1-*obc2;
            cout<<"Объект после операции:"<<endl;
            obc1->print();
            delete obc2;
            obc2=nullptr;
         break;
        }
        case 11:
        {
            obc2 = new List;
            obc2->create();
            cout<<"Для демонстрации работы программы был создан объект с рандомными характеристиками:"<<endl;
            obc2->print();
            cout<<"Исходный объект до операции:"<<endl;
            obc1->print();
            *obc1 = *obc1 * *obc2;
            cout<<"Объект после операции:"<<endl;
            obc1->print();
            delete obc2;
            obc2=nullptr;
            break;
        }
        case 12:
        {
            obc2 = new List;
            obc2->create();
            cout<<"Для демонстрации работы программы был создан объект с рандомными характеристиками:"<<endl;
            obc2->print();
            cout<<"Исходный объект до операции:"<<endl;
            obc1->print();
            *obc1 = *obc1 / *obc2;
            cout<<"Объект после операции:"<<endl;
            obc1->print();
            delete obc2;
            obc2=nullptr;
            break;
        }
        case 13:
        {
            cout<<"Введите целое число, которое будет использовано в качестве операнда"<<endl;
            int tmp;
            cin>>tmp;
            cout<<"Объект до операции:"<<endl;
            obc1->print();
            cout<<"Объект после операции:"<<endl;
            *obc1+=tmp;
            obc1->print();
           break;
        }
        case 14:
        {
            cout<<"Введите целое число, которое будет использовано в качестве операнда"<<endl;
            int tmp;
            cin>>tmp;
            cout<<"Объект до операции:"<<endl;
            obc1->print();
            cout<<"Объект после операции:"<<endl;
            *obc1-=tmp;
            obc1->print();
           break;
        }
        case 15:
        {
            cout<<"Введите целое число, которое будет использовано в качестве операнда"<<endl;
            int tmp;
            cin>>tmp;
            cout<<"Объект до операции:"<<endl;
            obc1->print();
            cout<<"Объект после операции:"<<endl;
            *obc1*=tmp;
            obc1->print();
            break;
        }
        case 16:
        {
            cout<<"Введите целое число, которое будет использовано в качестве операнда"<<endl;
            int tmp;
            cin>>tmp;
            cout<<"Объект до операции:"<<endl;
            obc1->print();
            cout<<"Объект после операции:"<<endl;
            *obc1/=tmp;
            obc1->print();
            break;
        }
        case 17:
        {
            exit = false;
            cout<<"Программа завершена"<<endl;
            delete obj1;
            delete obj2;
            delete obc1;
            delete obc2;
            break;
        }
        default:
            break;
    }
    }while(exit);
    return 0;
}

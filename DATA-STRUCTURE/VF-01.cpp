#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class A 
{
    public:
    virtual void print()
    {
        cout<<"class A"<<endl;
    }
} ;

class B:public A 
{
    public:
    virtual void print()
    {
        cout<<"class B"<<endl;
    }
};

int main()
{


    A a;
    B b;
    a.print();
    b.print();
    b.A::print();
    A *atr;
    atr=&a;
    atr->print();
    B *btr;
    btr=&b;
    btr->print();
    
    return 0;
}
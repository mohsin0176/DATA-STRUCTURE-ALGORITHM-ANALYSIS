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
    A *x;
    x=&b;
    x->print();


    return 0;
}
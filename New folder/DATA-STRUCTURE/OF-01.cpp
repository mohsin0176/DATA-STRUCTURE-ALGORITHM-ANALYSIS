// C++ program to demonstrate the use of virtual function

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class B
{
public:
    void print()
    {
        cout<<"B"<<endl;
    }
} ;

class C:public B
{
public:
    void print()
    {
        cout<<"C"<<endl;
    }
    
};

int main() 
{
     C c;
     B *b=&c;
     b->print();
     
     
 


    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class A
{
 
    private:
    int x=100;
    string n="mohsin";
    public:
    friend class  B;
 
    
};

class B
{
 
      public:
        int print (A &a)
        {
            cout<<a.n<<a.x;
        }

};



int main()
{


 A a;
 B b;
 b.print(a);
 
    return 0;
}
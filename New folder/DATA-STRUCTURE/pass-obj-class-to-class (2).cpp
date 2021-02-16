#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class A
{
public:
int fun(B &b){return 0;}   
};

class B
{
public:
int fun1(A &a){return 0;}   
};



int main()
{


    B b;
    A a;
    b.fun1();
    a.fun(b);
	return 0;
}
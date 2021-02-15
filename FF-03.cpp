#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class B; 
class A
{
private:
	int vara;
	friend int add(A,B);
public:
    A():vara(100) {} 
    friend class B;
};

class B
{
private:
	int varb;
public:
	B():varb(200){}
    int add(A a,B b)
    {
    return a.vara+b.varb;
    } 

};



int main()
{

    A a;
    B b;
    cout<<b.add(a,b);
	return 0;
}
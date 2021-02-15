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
	A():vara(10){}
};

class B
{
private:
	int varb;
	friend int add(A,B); 
public:
	B():varb(20){}

};

int add(A a,B b)
{

	return a.vara+b.varb;
} 

int main()
{

    A a;
    B b;
    cout<<add(a,b);
	return 0;
}
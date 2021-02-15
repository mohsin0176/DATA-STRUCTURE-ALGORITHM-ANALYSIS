#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class A
{
private:
	int vara;
    friend class B;
 
public:
    A():vara(100) {}  
     
    
};

class B
{
private:
	int varb;
 
public:
	B():varb(50){} 
   
    int add(A &a)
    {   
        
        return a.vara+varb;
    }
      

};



int main()
{


    B b;
    A a;
    cout<<b.add(a);
 
	return 0;
}
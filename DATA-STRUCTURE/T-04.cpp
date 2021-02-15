#include <iostream>
#include<bits/stdc++.h>
using namespace std;

template <class T>
 
 class Cal
 {
 private:
 	T n1,n2;
 public:
 	Cal(T n1,T n2)
 	{
 		n1=n1;
 		n2=n2;
 	}

 	T display()
 	{
 		cout<<n1<<endl<<n2<<endl;

 		cout<<add()<<endl;
 		
 		cout<<sub()<<endl;
 		
 		cout<<mul()<<endl;

 		cout<<divi()<<endl;
 	} 

 	T add(){return n1+n2;}
 	T sub(){return n1-n2;}
 	T mul(){return n1*n2;}
 	T divi(){return n1/n2;}
 };

int main()
{
 
 Cal<int> fun(3,2);
 Cal<float> fun1(2.2,1.3);
 fun.add();
 fun.sub();
 fun.mul();
 fun.divi();
 fun.display();
 fun1.add();
 fun1.sub();
 fun1.mul();
 fun1.divi();
 fun1.display();




	return 0;
}
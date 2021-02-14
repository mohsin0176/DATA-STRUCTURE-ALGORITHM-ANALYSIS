#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Count
{
private:
	int value;
public:
	Count():value(5){}
    void operator ++ (){++value;}
	void operator ++ (int){++value;}
	void display(){cout<<value<<endl;}

};


int main()
{

	Count count1;
	++count1;
	count1.display();
    count1++;
	count1.display();

	return 0;
}

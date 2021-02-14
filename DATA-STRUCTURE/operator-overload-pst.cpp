 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Count
{
private:
	int value;
public:
	Count():value(5){}
    Count operator ++ (int)
        {
        Count temp;
        temp.value=++value;
        return temp;
        }

	void display(){cout<<value<<endl;}

};


int main()
{

	Count count1;
    count1++;
	count1.display();


	return 0;
}

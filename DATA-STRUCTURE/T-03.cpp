#include <iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
void Swap(T &n1, T &n2)
{
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout<<n1<<n2;
}

int main()
{
     int i1,i2;
     float f1,f2;
     int i3,i4;
     cin>>i1>>i2;
     cin>>f1>>f2;
     cin>>i3>>i4;


	Swap(i1, i2);
	Swap(f1, f2);
	Swap(i3, i4);


	return 0;
}
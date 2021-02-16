#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=5;
	int *p=&x;
	int **q=&p;
	int ***r=&q;
	cout<<*p<<endl;
	cout<<**q<<endl;
	cout<<***r<<endl;

	return 0;
}
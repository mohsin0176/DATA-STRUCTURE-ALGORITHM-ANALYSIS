#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=10;
	int *p=&a;
	cout<<*p<<endl;
	char *p0;
	p0=(char *)p;
	cout<<*p0<<endl;
	return 0;
}

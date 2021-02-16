#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={10,20,30,40,50};
	int i;
	int *p;
	p=arr;
	cout<<"First Array"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<(p+i)<<endl;
		cout<<*(p+i)<<endl;
	}
	int *q=arr;
	cout<<"Second Array"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<(q+i)<<endl;
		cout<<*(q+i)<<endl;
	}
	return 0;
}
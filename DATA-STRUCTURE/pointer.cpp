#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=10;
	int *ptr=&a;
	cout<<a;
	cout<<&a;
	cout<<ptr;
	cout<<*ptr;
	int **qtr=&ptr;
	cout<<qtr;
	cout<<*qtr;
	int arr[5]={5,10,20,1,45};
	int *p=arr;
	int i;
	for(i=0;i<=4;i++)
	{
		cout<<(arr+i)<<endl;
		cout<<*(arr+i)<<endl;
		cout<<(p+i)<<endl;
		cout<<*(p+i)<<endl;
	}
	return 0;
}

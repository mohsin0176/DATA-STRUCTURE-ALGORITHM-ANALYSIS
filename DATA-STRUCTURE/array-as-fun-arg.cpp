#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int add(int p[])
{
   for(int i=0;i<=4;i++)
   {
   	cout<<p[i]<<"\t";
   }
}
int main()
{
	int arr[]={10,20,30,40,50};
	add(arr);
	return 0;
}
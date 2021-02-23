#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int c[3][2][1];
    int (*p)[2][1]=c;
    cout<<c[3]<<endl;
    cout<<*p<<endl;
    cout<<c[3]<<endl;
    cout<<"------------------"<<endl;
    cout<<&c[3]<<endl;
    cout<<p<<endl;
    cout<<&c[3]<<endl;;
     
	return 0;
}
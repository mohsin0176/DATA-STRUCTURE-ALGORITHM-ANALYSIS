#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

int p=5;
int *x;
x=&p;

cout<<*x<<endl;;
int *y;
y=&x;
cout<<*y<<endl;
return 0;
}

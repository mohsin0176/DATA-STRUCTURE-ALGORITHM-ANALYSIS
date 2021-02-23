#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int *p;
    p=new int();
    *p=10;
    cout<<*p<<endl;
    delete p;
    int *a;
    a=new int(15);
    cout<<*a<<endl;
   free(a);
    

	return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int* p;
    p=&a;
    cout<<*p<<endl;
    int** q;
    q=&p;
    cout<<**q<<endl;

return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
        {
        return 1;
        }
}
int fib(int n)
{
    if(n>=3)
    {
        return fib(n-1)+fib(n-2);
    }
    else
        {
        return 1;
        }
}

int main()
{
    cout<<fact(30)<<endl;
    cout<<fib(30)<<endl;

    return 0;
}

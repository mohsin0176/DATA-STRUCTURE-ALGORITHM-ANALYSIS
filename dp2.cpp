#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int *p=NULL;
    int i;
    p=new int[10];
    for(i=0;i<=9;i++)
    {
     cin>>*(p+i);
    }
    for(i=0;i<=9;i++)
    {
     cout<<*(p+i)<<endl;
    }
    delete [] p;

}
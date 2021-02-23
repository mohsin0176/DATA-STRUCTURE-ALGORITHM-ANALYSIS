#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i;
    cin>>n;
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<=9;i++)
    {
     cin>>*(a+i);
    }
    for(i=0;i<=9;i++)
    {
     cout<<*(a+i)<<endl;
    }
    delete [] a;
    return 0;

}
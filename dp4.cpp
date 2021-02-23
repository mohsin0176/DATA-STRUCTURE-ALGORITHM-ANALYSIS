#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

int i,n;
cin>>n;
int *p;
p=new int[n];
int *b=(int *)realloc(p,n*sizeof(int));
for(i=0;i<=n-1;i++)
{
    cin>>*(b+i);
} 
for(i=0;i<=n-1;i++)
{
    cout<<*(b+i)<<endl;
} 

    return 0;

}

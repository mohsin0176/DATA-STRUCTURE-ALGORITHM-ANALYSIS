#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{

int i;
for(i=0;i<=100;i=i+2)
{
if(i>=50)
{
    cout<<(rand()%7)+i<<endl;
    continue;
}
}
return 0;
}

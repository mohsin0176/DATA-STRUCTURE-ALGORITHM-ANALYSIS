

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
template<class T>
T large(T n1,T n2)
{
    return (n1>n2)?n1:n2;
}

int main() 
{
     int i1,i2;
     float f1,f2;
     int i3,i4;
     cin>>i1>>i2;
     cin>>f1>>f2;
     cin>>i3>>i4;
     cout<<large(i1,i2)<<endl;
     cout<<large(f1,f2)<<endl;
     cout<<large(i3,i4)<<endl;
     return 0;
 
}
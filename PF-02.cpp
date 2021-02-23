#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int &add(int *p,int *q)
{
	int c=(*p)+(*q);
	return c;
}

int main()
{

   int a=10;
   int b=20;
   int *ptr=add(&a,&b);
   cout<<*ptr;
   

    return 0;

}

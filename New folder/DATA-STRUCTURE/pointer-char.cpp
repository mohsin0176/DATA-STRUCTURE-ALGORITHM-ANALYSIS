#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int display(char *A)
{
	int i;

	for(i=0;i<=4;i++)
	{
		cout<<*(A+i)<<endl;
	}
} 

int main()
{
	char C[20]="HELLO";
	display(C);
	return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int display(char *A)
{
	int i=0;
	while(*(A+i)!=' ')
    {
	cout<<*(A+i)<<endl;
	i++;
	}
} 

int main()
{
	char C[20]="HEL LO";
	display(C);
	return 0;
}
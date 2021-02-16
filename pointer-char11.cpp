#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int display(char *C)
{
	int i=0;

	while(*C !='\0')
	{
		cout<<*C<<endl;
		C++;
	
	}
} 

int main()
{
	char C[20]="HELLO";
	display(C);
	return 0;
}
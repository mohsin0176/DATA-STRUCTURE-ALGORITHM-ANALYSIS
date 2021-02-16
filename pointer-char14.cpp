#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int display(char *C)
{
	
	C[0]='A';
	C[2]='M';
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
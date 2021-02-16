#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int display(char *C)
{
	int i=0;

	while(*(C+i) !='\0')
	{
		cout<<*(C+i)<<endl;
		i++;
	
	}
} 

int main()
{
	char C[20]="HELLO";
	display(C);
	return 0;
	
}
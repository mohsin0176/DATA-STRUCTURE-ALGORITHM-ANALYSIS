#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int A){}
void func(int *A){}

void func(int B[5][3]){}
void func(int B[][3]){}
void func(int (*P)[3]){}

void func(int P[3][2][2]){}
void func(int (*P)[2][2]){}



int main()
{

	int c[3][2][2]={
					{{2,5},{7,9}},
					{{3,4},{6,1}},
					{{0,8},{11,13}}
				   };

    int A[2]={1,2};
    int B[2][3]={{2,4,6},{5,7,8}};
    int X[5][3];
    func(A);
    func(B);
    func(X);
    func(c);
	return 0;
}
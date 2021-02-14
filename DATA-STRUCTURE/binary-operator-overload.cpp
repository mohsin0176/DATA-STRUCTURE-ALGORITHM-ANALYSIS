 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
	Complex():real(0),imag(0){}
	void input(){cin>>real>>imag;}
	void output(){cout<<real<<"+"<<imag<<"i";}

    Complex operator + (Complex &obj)
        {
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
        }



};


int main()
{

	Complex c1,c2,result;
	c1.input();
	c2.input();
	result=c1+c2;
	result.output();

	return 0;
}

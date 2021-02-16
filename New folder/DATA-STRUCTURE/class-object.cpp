#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Car
{
    public:
    string name;
    string color;
    int weight;

    Car(string n,string c,int w)
    {
        this->name=n;
        this->color=c;
        this->weight=w;
    }
    void print()
    {
        cout<<this->name<<endl;
        cout<<this->color<<endl;
        cout<<this->weight<<endl;
        cout<<endl<<"---------------------"<<endl;
    }
};
int main()
{

    Car c3("Tom","yellow",30);
    Car c4("Jerry","black",20);
    c3.print();
    c4.print();
    return 0;
}

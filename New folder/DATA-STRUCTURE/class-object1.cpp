#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Car
{
    public:
    string name;
    string color;
    int weight;

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
    Car c1;
    c1.name="Tom";
    c1.color="red";
    c1.weight=40;
    Car c2;
    c2.name="Tom";
    c2.color="red";
    c2.weight=40;
    c1.print();
    c2.print();
    return 0;
}

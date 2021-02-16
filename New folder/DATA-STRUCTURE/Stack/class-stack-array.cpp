#include<iostream>
#include<cstdlib>
#include<conio.h>
#define MAX 100
using namespace std;
class Stack{

public:
int i;
int TOP;
int data[MAX];
//public:
Stack(){  TOP=-1; }
void initStack();
int isEmpty();
int isFull();
int push(int code);
int display();
int pop();
};



void Stack::initStack()
{
     TOP=-1;
}
int Stack::isEmpty()
{
    if( TOP==-1)
    {
        return 1;
    }
    else

    {
        return 0;
    }
}

int Stack::isFull()
{
    if(TOP==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Stack::push(int code)
{
    if(isFull())
    {
      return 0;
    }
    else
    {
        TOP++;
        data[TOP]=code;
        return data[TOP];

    }


}

int Stack::display(){



    if(!isEmpty())
    {
    for(i=0;i<=TOP;i++)
    {cout<<data[i]<<endl;}
    }
    else
    {
     return 0;
    }

}

int Stack::pop()
{

    if(isEmpty())
    {

        return 0;
    }
    else
    {
        int item=data[TOP];
        TOP--;
        return item;
  	}

}
int main()
{
    Stack q;
    int code;
    q.initStack();
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(100);
    q.push(200);
    q.push(300);
    q.pop();
    q.pop();
    q.pop();
    cin>>code;
    q.push(code);
    q.display();

    return 0;
}



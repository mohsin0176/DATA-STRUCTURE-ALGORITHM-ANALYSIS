#include<iostream>
#include<cstdlib>
#include<conio.h>
#define MAX 100

using namespace std;
int TOP;
struct Stack{
    int code;
};

struct Stack data[MAX];

void initStack()
{
     TOP=-1;
}
int isEmpty()
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

int isFull()
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

void push(int code)
{
    if(isFull())
    {
      return ;
    }
    else if(TOP==-1)
    {
        TOP++;
        data[TOP].code=code;
        int x=data[TOP].code;
        return x;
    }
    else
    {
        TOP++;
        data[TOP].code=code;
        int y=data[TOP].code;
        return y;
    }

}

void display(){
    int i;
    if(isEmpty()){
        return ;
    }
    else
    {
    for(i=0;i<=TOP;i++)
    {
        cout<<data[i].code<<endl;
    }

    }

}

int pop()
{

    if(isEmpty())
    {

        return ;
    }
    else
    {
        int item=data[TOP].code;
        TOP--;
        return item;
    }

}

int main()
{

    int code;
    initStack();
    push(100);
    push(200);
    push(300);
    push(100);
    push(200);
    push(300);
    push(100);
    push(200);
    push(300);
    push(100);
    push(200);
    push(300);
    pop();
    pop();
    pop();
    cin>>code;
    push(code);
    display();

    return 0;
}

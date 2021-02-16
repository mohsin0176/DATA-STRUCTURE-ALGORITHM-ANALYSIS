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

int push(int code)
{
    if(isFull())
    {
      return 0;
    }
    else if(TOP==-1)
    {
        TOP++;
        data[TOP].code=code;
        return data[TOP].code;
    }
    else
    {
        TOP++;
        data[TOP].code=code;
        return data[TOP].code;
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

        return 0;
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

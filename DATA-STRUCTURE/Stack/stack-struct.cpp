#include<iostream>
#include<cstdlib>
#include<conio.h>
#define MAX 100

using namespace std;
int TOP;
struct Stack{
    int code;
};

Stack data[MAX];

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

int isFULL()
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
    if(!isFULL())
    {
        TOP++;
        data[TOP].code=code;
        return data[TOP].code;
    }

}

void display(){
    int i;
    if(isEmpty()){
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
    else
    {
    for(i=TOP;i>=0;i--)
    {
        cout<<data[i].code<<endl;
    }

    }

}

int pop()
{

    if(!isEmpty())
    {
        int item=data[TOP].code;
        TOP--;
        return item;
    }
    else
    {
        return 0;
    }

}

int main()
{

    int code;
    initStack();
    isEmpty();
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

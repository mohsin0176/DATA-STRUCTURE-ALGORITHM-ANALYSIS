#include<iostream>
#include<cstdlib>
#define MAX 100
using namespace std;

class Stack
{

public:
    int myStack[MAX];
    int top;
    Stack(){top=-1;}
    int push(int x);
    int pop();
    bool isEmpty();
    int display();
};

int Stack::push(int item)
{
    if(top<=MAX-1)
    {
        top++;
        myStack[top]=item;
        return myStack[top];
    }
    else
    {
        return 0;
    }
}

bool Stack::isEmpty()
{
    if(top=-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::pop()
{
    if(top<=MAX-1)
    {
        int item=myStack[top];
        top--;
        return item;

    }
    else
    {

        return 0;

    }

}
int Stack::display()
{

    while(top>=0)
    {
        cout<<myStack[top]<<endl;
        top--;
    }
}
int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.push(300);
    stack.display();

    return 0;
}

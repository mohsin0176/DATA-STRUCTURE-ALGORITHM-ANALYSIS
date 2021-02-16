#include<iostream>
#include<cstdlib>
#include<conio.h>
#define MAX 100

using namespace std;

class Stack
{
    public:
    int data;
    class Stack *next;
    int push(int);
    int pop();
    int display();
};
Stack *top=NULL;


int Stack :: push(int data)
{    Stack *temp;
     top=new Stack();
    temp=new Stack();
    temp->data=data;
    temp->next=top;
    top=temp;
    //free(temp);
}
int Stack :: pop()
{
      Stack *temp;
     top=new Stack();
    temp=new Stack();
    if(top=0)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {

        cout<<top->data;
        top=top->next;
        top->next=NULL;
    }
}
int Stack :: display()
{
      Stack *temp;
     top=new Stack();
    temp=new Stack();
    while(top!=NULL)
    {

        cout<<top->data;
        top=top->next;
    }
}

int main()
{
   Stack S;
   int code;
    S.push(100);
    S.push(200);
    S.push(300);
    S.push(100);
    S.push(200);
    S.push(300);
    S.push(100);
    S.push(200);
    S.push(300);
    S.push(100);
    S.push(200);
    S.push(300);
    S.pop();
    S.pop();
    S.pop();
    cin>>code;
    S.push(code);
    S.display();

    return 0;
}

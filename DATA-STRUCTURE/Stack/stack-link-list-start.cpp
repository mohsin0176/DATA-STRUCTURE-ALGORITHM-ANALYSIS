#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top;


int push(int data)
{
    struct Node *temp;
    temp=new Node();
    if(top==NULL)
    {
        temp->data=data;
        temp->next=NULL;
        top=temp;

    }
    else
    {

         temp->data=data;
         temp->next=top;
         top=temp;
    }
}
bool isEmpty()
{
    if(top==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int pop()
{


    if(!isEmpty())
    {

       top->next=NULL;
       top=top->next;

    }
    else
    {

      return 0;
    }
}
int display()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        cout<<"All Element is:"<<endl;
        while(top!=NULL)
        {
            cout<<top->data<<endl;
            top=top->next;
        }

    }
}
int Peek()
{

    if (!isEmpty())
    {
         return top->data;
    }

    else
        {
            exit(1);
        }
}
int main()
{
    push(11);
    push(22);
    push(23);
    pop();
    pop();
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    cout<<"Top Element is:"<<endl<<Peek()<<endl;
    display();



    return 0;
}

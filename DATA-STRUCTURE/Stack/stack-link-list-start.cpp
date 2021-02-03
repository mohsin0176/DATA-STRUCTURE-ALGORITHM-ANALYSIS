#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start=NULL;
struct Node *rear=NULL;


int push(int data)
{
    struct Node *temp;
    temp=new Node();
    if(start==NULL&&rear==NULL)
    {
        temp->data=data;
        temp->next=NULL;
        start=temp;
        rear=temp;

    }
    else
    {

         temp->data=data;
         temp->next=NULL;
         rear=temp;
    }
}
bool isEmpty()
{
    if(start==NULL)
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

       start->next=NULL;
       start=start->next;

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
        while(start!=NULL)
        {
            cout<<start->data<<endl;
            start=start->next;
        }

    }
}
int Peek()
{

    if (!isEmpty())
    {
         return rear->data;
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

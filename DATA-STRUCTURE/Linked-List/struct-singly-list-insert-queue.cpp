#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start;
struct Node *rear;
struct Node *temp;

rear=new Node();
temp=new Node();
start=new Node();

int enqueue(int data)
{
    if(start==NULL&&rear==NULL)
    {
        start->next=NULL;
        start->data=data;
        start=rear;

    }

    else
    {

        start->next=temp;
        temp->data=data;
        temp->next=NULL;
        rear=temp;
    }
}

void dequeue()
{
    if(start==NULL&&rear==NULL)
    {
        return;
    }
    else
    {
    temp=start;
     start=start->next;
    }
}

void display()
{
while(start!=NULL)
{
    cout<<start->data<<endl;
    start=start->next;
}
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}

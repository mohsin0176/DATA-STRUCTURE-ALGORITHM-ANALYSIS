#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{

int data;
struct Node *next;

};
struct Node *rear;
struct Node *front;

void enqueue(int data)
{
    struct Node *temp;
    temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(rear==NULL&&front==NULL)
    {
    rear=temp;
    front=temp;
    }
    else
    {
    rear->next=temp;
    rear=temp;
    }

}

void dequeue()
{
    cout<<front->data<<endl;
    front=front->next;
}

void print()
{

    while(front!=NULL)
    {
    cout<<front->data<<endl;
    front=front->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    cout<<"Deleted:"<<endl;
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    cout<<endl<<"List:"<<endl;
    print();
    return 0;
}

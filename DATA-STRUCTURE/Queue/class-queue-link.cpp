 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *start;
Node *rear;
Node *temp;
class Queue
 {
    public:
    int enqueue(int data);
    int dequeue();
    bool isFull();
    bool isEmpty();
    void display();
    int isPeek();


};

int Queue::enqueue(int data)
{

    temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(start==NULL&&rear==NULL)
    {
        start=temp;
        rear=temp;
    }
    else
    {
     rear->next=temp;
     rear=temp;
    }
}
int Queue::dequeue()
{
    if(!isEmpty())
    {
        cout<<start->data<<endl;
        start=start->next;

    }
    else
    {
        return 0;
    }
}
bool Queue::isFull()
{
    if(start!=NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool Queue::isEmpty()
{
    if(start==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Queue::isPeek()
{
    if(start=rear)
    {
        cout<<start->data;
    }
    else
    {
        cout<<rear->data;
    }
}
void Queue::display()
{
    if(start=rear)
    {
        cout<<start->data<<endl;
    }
    else
    {
    while(start!=NULL)
    {
        cout<<start->data<<endl;
        start=start->next;
    }
    }
}

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<"Popped Elements Are:"<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(60);
    cout<<"All Elements Are:"<<endl;
    q.display();
    cout<<"Top Element is:"<<endl;
    q.isPeek();
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
Queue()
{
    //public:
    int data;
    Queue *next;
};

    int enqueue(int value);
    int dequeue();
    bool isFull();
    bool isEmpty();
    int isPeek();
    void display();

};
Queue *front;
Queue *rear;
int Queue::enqueue(int value)
{
    Queue *temp;
    temp=new Node();
    temp->data=value;
    temp->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=temp;
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
    if(!isEmpty)
    {
        cout<<front->data<<endl;
        front=front->next;
    }
    else
    {
        return 0;
    }
}
bool Queue::isFull()
{
    if(front!=NULL)
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
    if(front==NULL&&rear==NULL)
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
    if(rear!=NULL)
    {
        return rear->data;
    }
}
void Queue::dispaly()
{
    while(front!=NULL)
    {
        cout<<front->data<<endl;
        front=front->next;
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
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}

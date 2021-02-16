#include<iostream>
#include<cstdlib>
#include<conio.h>
#define MAX 100

using namespace std;

class Queue{
public:
int front;
int rear;
int data[MAX];
//public:
Queue()
{
front=-1;
rear=-1;
}
void initQueue();
int isEmpty();
int isFull();
int enqueue(int code);
void display();
int dequeue();
};



void Queue::initQueue()
{
     front=rear=-1;
}
int Queue::isEmpty()
{
    if( front==-1&&rear==-1)
    {
        return 1;
    }
    else

    {
        return 0;
    }
}

int Queue::isFull()
{
    if(rear==MAX-1&&front==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Queue::enqueue(int code)
{
    if(isFull())
    {
      return 0;
    }
    else if(front==-1&&rear==-1)
    {
        front++;
        rear++;
        data[front]=code;
        data[front]=data[rear];
        return data[front];

    }
    else
    {
        rear++;
        data[rear]=code;
        return data[rear];
    }

}

void Queue::display(){
    int i;
    if(isEmpty()){
        return ;
    }
    else
    {
    for(i=front;i<=rear;i++)
    {
        cout<<data[i]<<endl;
    }

    }

}

int Queue::dequeue()
{

    if(!isEmpty())
    {
        int item=data[front];
        front++;
        return item;
    }
    else
    {
        return 0;
    }

}

int main()
{
    Queue q;
    int code;
    q.initQueue();
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cin>>code;
    q.enqueue(code);
    q.display();

    return 0;
}


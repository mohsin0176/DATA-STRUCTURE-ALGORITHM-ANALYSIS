#include<iostream>
#include<cstdlib>
#include<conio.h>
#define MAX 100

using namespace std;
int front;int rear;
struct Queue{
    int code;
};

struct Queue data[MAX];

void initQueue()
{
     front=rear=-1;
}
int isEmpty()
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

int isFull()
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

int enqueue(int code)
{
    if(isFull())
    {
      return 0;
    }
    else if(front==-1&&rear==-1)
    {
        front++;
        rear++;
        data[front].code=code;
        data[front].code=data[rear].code;
        return data[front].code;

    }
    else
    {
        rear++;
        data[rear].code=code;
        return data[rear].code;
    }

}

void display(){
    int i;
    if(isEmpty()){
        return ;
    }
    else
    {
    for(i=front;i<=rear;i++)
    {
        cout<<data[i].code<<endl;
    }

    }

}

int dequeue()
{

    if(!isEmpty())
    {
        int item=data[front].code;
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

    int code;
    initQueue();
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(100);
    enqueue(200);
    enqueue(300);
    dequeue();
    dequeue();
    dequeue();
    cin>>code;
    enqueue(code);
    display();

    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
    data=d;
    next=NULL;
    }
};

struct Queue
{
	Node *front,*rear;
	Queue()
	{
	front=rear=NULL;
	}

	void enqueue(int n)
	{
	Node *temp=new Node(n);
	if(rear==NULL)
	{
	front=rear=temp;
	}
	rear->next=temp;
	rear=temp;
	}

	void dequeue()
	{
	if(front==NULL){return;}
	Node *temp=front;
	front=front->next;
	if(front==NULL) { rear=NULL; }
	}
};



int main()

{
    Queue q;
    q.enqueue(11);
    q.enqueue(22);
    q.enqueue(23);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout<<(q.front)->data<<endl;
    cout<<(q.rear)->data<<endl;


    return 0;
}

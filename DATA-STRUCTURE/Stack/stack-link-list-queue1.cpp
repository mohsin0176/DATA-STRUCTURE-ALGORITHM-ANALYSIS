#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start;
struct Node *rear;


void enqueue(int data)
{

    struct Node *temp;
    temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(start==NULL&&rear==NULL)
    {

    start->next=temp;
    rear=temp;

    }
    else
    {
        rear->next = temp;
        rear = temp;

    }


}



void dequeue()
{
       start=start->next;
       //start->next=NULL;

}
void display()
{

        cout<<"All Element is:"<<endl;
        while(start!=NULL)
        {
            cout<<start->data<<endl;
            start=start->next;
        }


}
int Peek()
{

return rear->data;
}
int main()
{
    enqueue(11);
    enqueue(22);
    enqueue(23);
    cout<<"Top Element is:"<<endl<<Peek()<<endl;




    return 0;
}

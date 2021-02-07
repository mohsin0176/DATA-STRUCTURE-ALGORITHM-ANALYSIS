#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};

struct Node *tmp;
struct Node *head;
struct Node *ptr;

void insert(int data)
{
    tmp=new Node();
    tmp->data=data;
    tmp->next=NULL;
    tmp->prev=NULL;

    if(head==NULL)
    {
        head=tmp;
        ptr=tmp;
    }
    else
    {
        head->next=tmp;
        tmp->prev=head;
        head=tmp;
    }
}

void display()
{

    cout<<"All Elements are:"<<endl;
    while(ptr!=head)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;
}
void del()
{
    cout<<"Deleted Elements is:"<<endl;
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    insert(90);
    insert(100);
    del();
    del();
    del();
    display();
    return 0;
}

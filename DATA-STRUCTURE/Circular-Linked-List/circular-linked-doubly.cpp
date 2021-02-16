#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

void print(struct Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }

}



void printb(struct Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->prev;
    }
    cout<<endl;
}

int main()
{
struct Node *head=NULL;
struct Node *first=NULL;
struct Node *second=NULL;

head=new Node();
first=new Node();
second=new Node();

head->data=10;
head->next=first;
head->prev=second;

first->data=20;
first->next=second;
first->prev=head;


second->data=30;
second->next=head;
second->prev=first;
print(head);
printb(head);
return 0;

}

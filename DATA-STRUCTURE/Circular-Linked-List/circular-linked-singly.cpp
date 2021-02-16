#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

};

void print(struct Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
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


first->data=20;
first->next=second;



second->data=30;
second->next=first;

print(head);

return 0;

}

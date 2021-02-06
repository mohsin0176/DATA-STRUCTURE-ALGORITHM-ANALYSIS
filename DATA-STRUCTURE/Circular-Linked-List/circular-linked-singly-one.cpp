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

struct Node *head=NULL;
struct Node *ptr=NULL;

void insert(int data)
{
    struct Node *temp;
    temp=new Node();

    temp->data=data;
    temp->next=head;

    if(head!=NULL)
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
            ptr->next=temp;
        }
    }

    else
    {
        temp->next=temp;
        head=temp;
    }
}
 void display()
 {
     ptr=head;
     while(ptr!=head)
     {
         cout<<ptr->data;
         ptr=ptr->next;
     }
 }


int main()
{


insert(10);
insert(20);
insert(30);

display();

return 0;

}

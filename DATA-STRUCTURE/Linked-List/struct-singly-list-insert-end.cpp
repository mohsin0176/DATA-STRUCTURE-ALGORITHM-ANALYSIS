#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{

int data;
struct Node *next;

};
struct Node *head;
struct Node *ptr;

void insert(int data)
{
    struct Node *temp;
    temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
    head=temp;
    ptr=head;
    }
    else
    {
    head->next=temp;
    head=temp;
    }

}

void print()
{

    while(ptr!=NULL)
    {
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    print();
    return 0;
}

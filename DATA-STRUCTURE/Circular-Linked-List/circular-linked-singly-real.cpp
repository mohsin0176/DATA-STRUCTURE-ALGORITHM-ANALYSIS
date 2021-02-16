#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
};

struct Node *tmp;
struct Node *ptr;
struct Node *head;

void insert(int data)
{
    tmp=new Node();
    tmp->data=data;
    tmp->next=NULL;
    if(head==NULL)
    {
        head=tmp;
        ptr=tmp;
    }
    else
    {
        head->next=tmp;
        tmp->next=ptr;
        head=tmp;
    }
}

void display()
{
    while(ptr!=head)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;
}
void del()
{
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
   cout<<"All Elements Of Linked List:"<<endl;
   display();
   del();
   del();
   del();
   del();
   cout<<"All Elements Of Linked List:"<<endl;
   display();
   return 0;
}

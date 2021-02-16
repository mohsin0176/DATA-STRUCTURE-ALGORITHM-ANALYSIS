
#include<iostream>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;
};

struct Node *tmp;
struct Node *ptr;
struct Node *head=NULL;

void insert(int data)
{
    tmp=new Node();
    tmp->data=data;
    tmp->next=head;
    tmp->prev=NULL;
    if(head==NULL)
    {
        //tmp->next=tmp;
        //tmp->prev=tmp;
        head=tmp;
        ptr=tmp;
    }
    else
    {
        head->next=tmp;
        head->prev=tmp;
        tmp->prev=head;
        ptr=tmp;
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
   //del();
   //del();
   //del();
   //del();
   //cout<<"All Elements Of Linked List:"<<endl;
  // display();
   return 0;
}

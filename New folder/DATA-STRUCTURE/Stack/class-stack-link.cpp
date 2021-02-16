 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *temp;
Node *top;
Node *ptr;
class Stack
 {
    public:
    int push(int data);
    int pop();
    bool isFull();
    bool isEmpty();
    void display();
    int isPeek();


};

int Stack::push(int data)
{

    temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
        ptr=temp;
    }
    else
    {

     temp->next=top;
     top=temp;
     ptr=temp;

    }
}
int Stack::pop()
{
    if(!isEmpty())
    {
        cout<<top->data<<endl;
        top=top->next;
        ptr=top;

    }
    else
    {
        return 0;
    }
}
bool Stack::isFull()
{
    if(top!=NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool Stack::isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::isPeek()
{
    if(top!=NULL)
    {
        return top->data;
    }
}
void Stack::display()
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<"Popped Elements Are:"<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(60);
    cout<<"All Elements Are:"<<endl;
    s.display();
    cout<<"Top Element is:"<<endl;
    cout<<s.isPeek();
    return 0;
}

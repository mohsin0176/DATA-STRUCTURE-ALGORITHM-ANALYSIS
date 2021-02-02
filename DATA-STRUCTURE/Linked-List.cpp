#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};

int print(Node *current)
{
    int count=0;
    Node *head=current;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
        count++;
    }
    cout<<"Total Node is equal to:"<<count<<endl;

}
int main()
{

    Node  *nodeA=NULL;
    Node  *nodeB=NULL;
    Node  *nodeC=NULL;
    Node  *nodeD=NULL;
    Node  *nodeE=NULL;
    Node  *nodeF=NULL;

    nodeA=new Node();
    nodeB=new Node();
    nodeC=new Node();
    nodeD=new Node();
    nodeE=new Node();
    nodeF=new Node();

    nodeA->data=10;
    nodeB->data=20;
    nodeC->data=30;
    nodeD->data=40;
    nodeE->data=50;
    nodeF->data=60;

    nodeA->next=nodeB;
    nodeB->next=nodeC;
    nodeC->next=nodeD;
    nodeD->next=nodeE;
    nodeE->next=nodeF;
    nodeF->next=NULL;
    print(nodeA);

    return 0;
}

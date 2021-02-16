#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

int sum(Node *root)
{
    int count=0;
    if(root==NULL)
    {
        return 0;
        cout<<"There is 1 Node"<<endl;
    }
    else
        {

        return root->data+sum(root->left)+sum(root->right);

        }
}

int main()
{
    Node *nodeA=NULL;
    Node *nodeB=NULL;
    Node *nodeC=NULL;
    Node *nodeD=NULL;
    Node *nodeE=NULL;
    nodeA=new Node(2);
    nodeB=new Node(3);
    nodeC=new Node(4);
    nodeD=new Node(5);
    nodeE=new Node(6);
    nodeA->left=nodeB;
    nodeB->left=nodeD;
    nodeB->right=nodeE;
    nodeA->right=nodeC;
    cout<<sum(nodeA);
    return 0;
}

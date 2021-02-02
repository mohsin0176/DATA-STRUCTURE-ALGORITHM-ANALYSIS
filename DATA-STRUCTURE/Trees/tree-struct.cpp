#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{

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


int main()
{

   struct Node *root=NULL;
   root=new Node(2);
   root->left=new Node(3);
   root->right=new Node(4);
   root->left->left=new Node(5);
   root->right->right=new Node(6);

    return 0;
}

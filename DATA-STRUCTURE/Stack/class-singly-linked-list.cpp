#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void print(Node *n)

{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}

int main()
{

 struct Node *head=NULL;
struct Node *first=NULL;
struct Node *second=NULL;


head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));


head->data=10;
head->next=first;
first->data=20;
first->next=second;
second->data=30;
second->next=NULL;
 print(head);

return 0;

}


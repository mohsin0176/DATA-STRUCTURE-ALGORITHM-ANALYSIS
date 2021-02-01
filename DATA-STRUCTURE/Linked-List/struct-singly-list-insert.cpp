#include<iostream>
#include<cstdlib>
using namespace std;
struct Node
{
//public:
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *start=NULL;
void print()

{

    while(start!=NULL)
    {
        cout<<start->data<<endl;
        start=start->next;
    }
}
void insert(int data)
{
    struct Node *temp;

    temp=new Node();
    head->next=temp;
    temp->data=data;
    temp->next=NULL;
    head=temp;
}
int main()
{

start=new Node();
start=head;
insert(100);
insert(200);
insert(300);
insert(400);
insert(500);
insert(600);
insert(700);
insert(800);

  print();

return 0;

}


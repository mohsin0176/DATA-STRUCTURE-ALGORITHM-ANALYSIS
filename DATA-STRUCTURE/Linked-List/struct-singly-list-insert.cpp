#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
public:
    int data;
    struct Node *next;
};
  Node *head=NULL;
void print()

{

    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
void insert(int data)
{
      Node *temp=NULL;

    temp=new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
}
int main()
{
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


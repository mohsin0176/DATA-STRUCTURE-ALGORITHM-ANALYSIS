#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node *head = NULL;
struct Node *ptr = head;
void insert(int data)
{
   struct Node *newnode;
   newnode = new Node();
   newnode->data = data;
   newnode->next = head;
   if (head!= NULL) {
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newnode;
   } else
   newnode->next = newnode;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}
int main()
{
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The circular linked list is: ";
   display();
   return 0;
}

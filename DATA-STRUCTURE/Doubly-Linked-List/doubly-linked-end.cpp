#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node *head = NULL;
void insert(int data) {
   struct Node *temp;
   temp = new Node();
   temp->data = data;
   temp->prev=head;
   temp->next = NULL;
   if(head != NULL)
   head->next=temp;
   head=temp;

}
void display() {

   while(head != NULL) {
      cout<< head->data <<" ";
      head = head->prev;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: "<<endl;
   display();
   return 0;
}

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
   temp->prev = NULL;
   temp->next = head;
   if(head != NULL)
   head->prev = temp ;
   head = temp;




}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
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

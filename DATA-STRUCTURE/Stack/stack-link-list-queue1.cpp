
    #include<iostream>
    #include<stdio.h>
    #include<conio.h>
    using namespace std;

    struct node
    {
    int data;
    node *next;
    };
    struct node *start;
    struct node *rear;
    struct node *temp;

    void enqueue(int data)
    {

        temp = new node();
        temp->data=data;
        temp->next=NULL;

        if(start==NULL && rear==NULL)
        {

            start= temp;
            rear=temp;


        }

        else

        {

            rear->next =temp;
            rear = temp;



        }

    }

    int dequeue()

    {

        if(start == NULL)
        {
        cout<<"empty queue\n";
        }

        else

        {
        start= start->next;
        }

    }

    void display()
    {
        while(start!=NULL)
        {
            cout<<start->data<<endl;
            start=start->next;
        }
    }

    int Peek()
    {
       cout<< rear->data;
    }

int main()

{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    Peek();


    return 0;

}

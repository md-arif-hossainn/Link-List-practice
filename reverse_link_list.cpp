#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head;

void display(){
    node *temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<"\n";
}

void insert(int data){
    node *newnode, *temp;
    newnode = new node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==0){
        head=temp=newnode;
    }
    else{
        temp->next= newnode;
        temp=newnode;
    }
}

void reverse(){
    node *current, *prev, *next;
    current=head;
    prev=NULL;
    cout<<"test";
    while(current!=0){
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
    }
    head= prev;
}
int main()
{
    head=NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    display();
    reverse();
    display();
    return 0;
}



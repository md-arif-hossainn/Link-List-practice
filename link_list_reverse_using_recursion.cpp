#include<iostream>
using namespace std;
//It  is print just reverse order not using fully functionality
struct node{
 int data;
 node* next;
};
void Insert(int x);
void Print();

node* Insert(node* head, int data)
{
  node* temp = new node();
  temp->data = data;
  temp->next = NULL;
  if(head == NULL) head=temp;
  else{
    node* temp1 = head;
    while(temp1->next!=NULL)temp1 = temp1->next;
    temp1->next=temp;
  }
  return head;
}

void Print(node* p)
{
    if(p==NULL) return;
    Print(p->next);//recursion 
    cout<<p->data<<" "; //If I use this line first its print normal way.


}
int main(){
    node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);
    Print(head);

}



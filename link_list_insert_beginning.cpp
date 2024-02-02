#include<iostream>
using namespace std;

struct node{
 int data;
 node* next;
};
void Insert(int x);
void Print();
//node* head;

node* Insert(node* head, int x)
{
  node* temp = new node();
  temp->data = x;
 // temp->next = NULL;
 // if(head!=NULL) temp->next = head;
  temp->next = head;
  head = temp;

  return head;
}

void Print(node* head)
{
    cout<<"LIST IS: ";
    while(head!= NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}
int main(){
    node* head = NULL;
    cout<<"How many data want to input \n";
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the number: \n";
        cin>>x;
        head = Insert(head,x);
        Print(head);
    }

}




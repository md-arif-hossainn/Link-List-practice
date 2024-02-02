#include <iostream>

using namespace std;

//Linked List: Delete a node at nth position

struct Node {
    int data;
    Node* next;
};

Node* head; //Global

void Insert(int data) { //Insert an integer at the end of list
    Node* temp1 = new Node;
    temp1->data = data;
    temp1->next = head;
    head = temp1;
}

void Print() { //Print all elements in the list
    Node* temp1 = head;
    while(temp1 != NULL) {
        cout << " " << temp1->data;
        temp1 = temp1->next;
    }
    cout << endl;
}

void Delete(int n) { //Delete node at position n
    Node* temp1 = head;
    if(n == 1) {
        head = temp1->next; //head now points to second node
        delete temp1;
        return;
    }
    for(int i = 0; i < n - 2; i++)
        temp1 = temp1->next; //temp1 points to (n - 1)th Node
    Node* temp2 = temp1->next; //nth Node
    temp1->next = temp2->next; // (n + 1)th Node
    delete temp2;

}


int main() {

    head = NULL; //Empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); //List: 2,4,6,5
    Print();
    int n;
    cout << "Enter a position" << endl;
    cin >> n;
    Delete(n);
    Print();




    return 0;
}

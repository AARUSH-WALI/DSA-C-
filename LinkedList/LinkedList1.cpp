#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next; // Self referential pointer
};



/*void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
*/
void insertAtTail( node* head, int value){
    node* temp = head;
    node* newnode = new node;

    if( head == NULL ){
        newnode->data = value;
        newnode->next = NULL;
        head = newnode;
        return;
    }

    while(temp->next!= NULL){
        temp=temp->next;
        }
    newnode->data = value;
    newnode->next = NULL;
    temp->next = newnode;
}

void print( node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" "<<temp->next;
        temp = temp->next;
    }
}


int main(){
    node *n1 = new node;
    n1->data = 10;
    n1->next = NULL;


    insertAtTail(n1,20);
    insertAtTail(n1,30);
    insertAtTail(n1,40);
    insertAtTail(n1,50);


    print(n1);

    return 0;
}

/*
cout<<n1->data << " -> "<<n1->next<<endl;
cout<<n2->data << " -> "<<n2->next<<endl;
printf("%d -> %s", n1->data, n1->next);
*/

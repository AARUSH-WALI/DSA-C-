#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(int d): data(d), prev(NULL), next(NULL) {} // Constructor use too initialize the node

};

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->prev<<"\t "<< temp->data<<"\t "<<temp->next<<endl;
        temp = temp->next;
    }
}

void insertTail(node* &head, int val){
    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void insertHead(node *&head, int val){
    node* newnode = new node(val);
    if(head == NULL){
        head=newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;

}

void delHead(node* &head){
    if(head == NULL){
        return;
    }
    node* newnode = head;
    newnode=newnode->next;
    newnode->prev = NULL;
    head = newnode;
}

void delTail(node* &head){
    node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = NULL;

    delete todelete; //here todelete is address and we are deleting the memory space taken by that address temp->next

}

void delPosition(node* &head, int pos){
    node* temp = head;
    int i=0;
    while(i<pos-1 && temp!=NULL){
        temp=temp->next;
        i++;
    }
    //node* todelete = temp->next;

    //todelete->next->prev = temp;
    //temp->next = todelete->next;
    temp->next=temp->next->next;
    delete temp->next;
    temp->next->prev = temp;

}

void delRange1(node* &head,int s, int e){
    for(int i=s+1;i<e;i++){
        delPosition(head,s+1);
    }
}

/*void delRange(node *head, int s, int e){
    node* end = head;
    int i=0;
    while(i!=e-1){
        end = end->next;
        i++;
    }
    node* st = head;
    i=0;
    while(i!=s-1){
        st = st->next;
        i++;
    }
    i=e;
    while(i>s ){
        node* temp = end;
            temp = end->prev;
            delete temp;
            i--;
        }
    }*/

void delRange(node*& head, int s, int e) {
    node* current = head;
    int pos = 0;
 // Move to the start position
    while (current && pos < s) {
        current = current->next;
        pos++;
 }
 // Delete nodes from s to e (inclusive)
    while (current && pos <= e) {
        node* temp = current;
        current = current->next;
    if (temp->prev) {
        temp->prev->next = current;
  } else {
        head = current; // if we're deleting the head
  }
    if (current) {
        current->prev = temp->prev;
  }
    delete temp;
    pos++;
 }
}



int main(){
    node* head = NULL;
    insertTail(head,10);
    insertTail(head,20);
    insertTail(head,30);
    insertTail(head,40);

    insertHead(head,50);
    insertHead(head,60);
    insertHead(head,70);
    //delHead(head);
    //delTail(head);

    print(head);
    cout<<endl;
    //delPosition(head,5);
    delRange(head,2,5);
    print(head);
}

#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next; // Self referential pointer
};

int main(){
    node *n1 = new node;
    n1->data = 10;
    n1->next = NULL;

    node *n2 = new node;
    n2->data = 20;
    n2->next = NULL;
    n1 ->next = n2;

    node *n3 = new node;
    n3->data = 30;
    n3->next = NULL;
    n2->next = n3;

    node *n4 = new node;
    n4->data = 40;
    n4->next = NULL;
    n3->next = n4;

    /*while(n1 != NULL){
        cout<<n1->data<<" -> "<<n1->next<<endl;
        n1=n1->next;
    }*/

    cout<<n1->data<<endl;
    cout<<n2->data<<endl;
    //cout<<*(n1->next)<<endl;  //ERROR( Donot point to any proper value )
    cout<<n1->next->next<<endl;
    cout<<n3<<endl;
    cout<<n3->data;
    return 0;
}

/*
cout<<n1->data << " -> "<<n1->next<<endl;
cout<<n2->data << " -> "<<n2->next<<endl;
printf("%d -> %s", n1->data, n1->next);
*/

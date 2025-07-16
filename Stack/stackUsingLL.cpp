#include <iostream>
using namespace std;

class Stack{

	public:

		class node{

			public:
				int data;
				node* next;

				node(int val): data(val), next(NULL){}
		};


		node* top;
		Stack(): top(NULL){}	// constructor of class stack
		void push(int);
		void pop();
		int topEle();
		void display();
		bool empty();
};

void Stack::push(int val){

	node* newnode = new node(val);

	newnode->next = top;
	top = newnode;
}

void Stack::pop(){

	if( top == NULL ){

		cout<<"Stack underflow: \n";
		return;
	}

	node* temp = top;
	top = top->next;
	delete temp;
}

int Stack::topEle(){

	if( top == NULL ){

		cout<<"Stack is empty: \n";
		return -1;
	}

	return top->data;
}

bool Stack::empty(){

	if( top == NULL )
		return true;
	else
		return false;
}

int main(){

	Stack s;

	s.push( 10 );
	s.push( 20 );
	s.push( 30 );
	s.push( 40 );
	s.push( 50 );
	s.push( 60 );

	while( !s.empty() ){

		cout<< s.topEle() <<" ";
		s.pop();
	}

	return 0;
}


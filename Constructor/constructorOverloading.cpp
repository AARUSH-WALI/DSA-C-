#include<iostream>
using namespace std;

class Data{
    public:
        int age;
        string name;
        // Inside Methods
        Data(){
            cout<<"Hello Bolo"<<endl;
        }
        Data(int age, string name){
            this->age=age;
            this->name = name;
        }
        void Print(void);
};

void Data::Print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;;
}
int main(){
    Data acc;      //Default Constructor || Non Para Constructor
    acc.Print();
    Data ac(21);
    ac.Print();

    return 0;
}

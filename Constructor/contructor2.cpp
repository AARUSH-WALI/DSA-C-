#include<iostream>
using namespace std;

class party{
public:
    int samosa;         //data members
    int mithai;
    string drink;

    /*party(){
        samosa = 2;
        mithai = 3;
        drink = "cold coffee";
    }*/
    party(): samosa(2), mithai(3), drink("Cold Coffee"){} //Initializer list

    void print(){
        cout<<"samosa: "<<samosa<<endl;
        cout<<"Sweets: "<<mithai<<endl;
        cout<<"Drink: "<<drink<<endl;
    }

};
int main(){
    party s1, s2, s3, s4, s5;

    s1.print();
    s2.print();

}


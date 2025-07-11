#include <iostream>
using namespace std;

class Data{
    public:
        string name;
        int age;

        Data(string name, int age){
            this->name=name;
            this->age=age;
        }
        //Custom Copy Constructor
        Data(Data &d) {
            cout << "Custom Copy Constructor Called" << endl;
            this->name=d.name;
            this->age=d.age;
    }

        void printDetails(void){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }

};
int main(){
    Data M1("Aarush",21);//Para Constt..
    M1.printDetails();

    Data M2(M1);// Copy COnstructor
    M2.printDetails();
    return 0;
}

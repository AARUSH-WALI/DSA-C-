#include<iostream>
using namespace std;
class btech{
    public:
        int roll;
        float cgpa;

        //btech(){}// Default Constructor

        btech(int r){
            cout<<"Constructor having 1 parameters"<<endl;
        }

        btech(int r, float c){ //Constructor
            roll = r;
            cgpa = c;
            cout<<"Constructor having 2 parameters"<<endl;
        }

        btech(){
            cout<<"Constructor having no parameters"<<endl;
        }

        ~btech(){
            cout<<"Destructor called: \n";
        }
};

int main(){
    btech s1(2020,9.2);
    btech s2(22);
    btech s3;

    btech *s4 = new btech(10,9.1);  // Its dynamically allocating the memory. But deallocation is done using free or delete.
    delete s4;

    return 0;
}

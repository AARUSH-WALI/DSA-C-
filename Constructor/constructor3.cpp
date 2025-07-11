#include<iostream>
using namespace std;

class btech{
    public:
        int roll;
        float cgpa;

        btech(){}

        btech(int r, float f): roll(r), cgpa(f){}

};

int main(){

    btech s1, s2(44, 8.9);
    cout<<"Roll: "<<s2.roll<<endl;
    cout<<"CGPS: "<<s2.cgpa<<endl<<endl;

    btech s3 = s2; // Copy Constructor
    cout<<"Roll: "<<s3.roll<<endl;
    cout<<"CGPA: "<<s3.cgpa<<endl;

    return 0;
}


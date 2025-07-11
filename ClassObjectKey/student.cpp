#include <iostream>
using namespace std;
class student {
    int roll;
    float cgpa;
    public:
        student(int r, float c) {
            roll=r;
            cgpa=c;
        }
        //or

        //Student(int r, float c): roll(r), cgpa(c);

        void display() {
            cout << "Roll Number: " << roll << endl;
            cout << "CGPA: " << cgpa << endl;
        }
    };
int main(){
    student s1(101, 8.75);
    s1.display();
    return 0;
}

//WAP to print student details roll and cgpa. Initialize roll and cgpa using constructor and print this detail via display function.

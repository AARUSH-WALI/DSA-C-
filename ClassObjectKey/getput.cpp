#include <iostream>
using namespace std;

class getput {
    int roll;
    float cgpa;
    string name;

public:
    void getdata();
    void putdata();
};

// Use correct class name here instead of 'Student'
void getput::getdata() {
    cout << "Enter Name: ";
    cin.ignore(); // Clear newline from input buffer
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter CGPA: ";
    cin >> cgpa;
}

void getput::putdata() {
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "CGPA: " << cgpa << endl;
}

int main() {
    getput s1, s2;
    s1.getdata();
    s2.getdata();

    s1.putdata();
    s2.putdata();

    return 0;
}

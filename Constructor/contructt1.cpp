//WAP to take name, roll, and cgpa of two students and print it.
//note: take data using getdata() function and print it using putdata() function.
#include <iostream>
using namespace std;

class constructt1 {
    int roll;
    float cgpa;
    string name;
public:
    void getData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll;
        //scanf("%[^\n]s", name);
        //getline(cin, name);

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }
    void putData() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main() {
    constructt1 s1;
    s1.getData();
    s1.putData();
    return 0;
}

#include <iostream>
using namespace std;

void add(int a, int b){
    cout<<a+b;
}

int main(){
    void (*ptr) (int, int); //function pointer
    ptr = add;
    ptr(200,20);

    return 0;
}

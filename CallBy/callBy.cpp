#include <iostream>
using namespace std;

void func(int num ){
    num = 10;
}

void func1( int* num){
    *num = 20;
}

int main() {
    int num = 20;
    cout<<num<<endl;
    func(num);//Call by Value
    cout<<num<<endl;


    func1( &num );//Call by Reference



    return 0;
}

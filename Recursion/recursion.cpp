#include <iostream>
using namespace std;

int num=0;
void func(){
    if(num==5){
        return;
    }
    cout<<"Hello WOrld"<<endl;

    num++;
    func();
}

int main(){
    func();

    return 0;
}

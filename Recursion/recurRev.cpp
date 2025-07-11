#include <iostream>
using namespace std;

void func(int num, int i){
    if(num > 10 ){
        return;
    }
    cout<<num*i<<endl;
    func(num+1,i);
}

int main(){
    int i;
    cin>>i;
    func(1,i);

    return 0;
}

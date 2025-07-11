#include<iostream>
using namespace std;

class Data{
    public:
        // Inside Methods
        void Greet(){
            cout<<"Hello Bolo";
        }
        void negGreet(void);
};
//Outside Methods
void Data::negGreet(){
    cout<<"hello mat Bolo";
}
int main(){
    Data acc;      //Default Constructor
    acc.Greet();
    cout<<endl;
    acc.negGreet();
    return 0;
}

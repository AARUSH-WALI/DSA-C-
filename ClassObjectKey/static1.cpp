#include<iostream>
using namespace std;

class btech{
    public:
        int nonStatic;
        static int staticVar;       //Static Variable

        btech(): nonStatic(10){}

        static void staticFun(){
            cout<<"I am static Method: "<<endl;
            cout<<"Static Var: "<<staticVar;             //2
            //cout<<"Non Static Var: "<<nonStatic<<endl;   //ERROR
        }

        void nonStaticFun(){
            cout<<"I am non-static Method: "<<endl;
            cout<<"Static Var: "<<staticVar;             //2
            cout<<"Non Static Var: "<<nonStatic<<endl;   //10
        }

};

int btech::staticVar = 2;
int btech::stv = 2;    //global initialization is mandatory

int main(){
    btech s1, s2;

    s1.nonStaticFun();
    s1.staticFun();
    return 0;
}

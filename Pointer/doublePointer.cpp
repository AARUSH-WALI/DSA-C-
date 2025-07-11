#include <iostream>
using namespace std;
int num=10;
int main(){
    int num = 20;
    int *ptr = &num;
    int **pptr=&ptr; //double pointer or pointer to pointer

    cout<<ptr<<endl;//address of num
    cout<<&num<<endl;//add of num
    cout<<pptr<<endl;//add of ptr
    cout<<&ptr<<endl;//add of ptr
    cout<<**pptr<<endl;//20
    cout<<***(&pptr)<<endl;//20
    cout<<*(&pptr)<<endl;//add of ptr
    cout<<*(&num)<<endl;//20
    cout<<**(&ptr)<<endl;//20



    return 0;
}

#include <iostream>
using namespace std;
int num=10;
int main(){
    int num = 20;
    int *ptr = &num;
    int &x = num;   // Creates the Alias

    cout<<num<<endl; //20
    cout<< ::num<<endl; // We use scope resolution operator to print global value.
    cout<<ptr<<endl; //Address of num
    cout<<x<<endl<<endl; //20


    cout<<*ptr<<endl; //20
    cout<<**(&ptr)<<endl; //20
    cout<<*(&num)<<endl<<endl; //20

    cout<<&num<<endl; //address of num
    cout<<ptr<<endl; //address of num
    cout<<&x<<endl; //address of num
    cout<<*(&ptr)<<endl; //address of num

    cout<<"-------------------------------------------------------------------------------------------------"<<endl;

    int **pptr=&ptr; //double pointer or pointer to pointer
    printf("%d \n", ***(&pptr));//20
	printf("%d \n", *(&pptr) );//address
	printf("%d \n", *(&num) );//20
	printf("%d \n", **(&ptr) );//20
	printf("%d \n", **pptr );//20


    return 0;
}

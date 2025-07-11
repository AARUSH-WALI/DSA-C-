#include <iostream>
using namespace std;
int main(){
    int a=10, b=20, c=30, d=40;
    int *arr[5]={&a, &b,&c, &d};// array of pointer

    int i=0;
    while(i!=5){
        //cout<<arr[i]<<" ";
        //cout<<arr+i<<" ";//address with diff. of 8 based on config.
        //cout<<*(arr+i)<<" ";//10  20  30  40 (arr-->address of a and +i-->+8 in the address... so *--> value at the address)
        cout<<**(arr+i)<<" ";

        i++;
    }

    return 0;
}

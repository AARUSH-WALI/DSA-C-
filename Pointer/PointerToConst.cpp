//Pointer to a const
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    const float hello = 3.14;
    const float *helloPtr;
    helloPtr = &hello;

    //*helloPtr = 4.12; ->ERROR

    float bolo = 22.97;
    helloPtr = &bolo;
    //*helloPtr = 11.9;     ..ERROR

    return 0;
}

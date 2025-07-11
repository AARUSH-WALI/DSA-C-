//Constant Pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    const float hello = 3.14;
    //const float *const helloPtr; // need to initialize as it is a pointer
    //helloPtr = &hello;   //ERROR

    const float *const helloPtr = &hello;

    float bolo = 22.97;
    //helloPtr = &bolo;   //ERROR

    return 0;
}

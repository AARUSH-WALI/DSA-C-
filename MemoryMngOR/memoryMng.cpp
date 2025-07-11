#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int *p;//declared in the stack memory
    p=(int*) malloc(sizeof(int));
    *p=40;
    printf("%d\n", *p);
    free(p);
    printf("%d\n", *p); // give address


    //c++
    //p=new int;
    //*p=40;
    //printf("%d\n", *p);
    //delete p;


    return 0;
}

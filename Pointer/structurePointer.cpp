//Structure Pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Data{
    int a;
    float b;
};

struct Data *p;
int main(){
    //int *p;
    //p=malloc(sizeof(int)); // For array etc.
    p=(struct Data*)malloc(sizeof(struct Data));// or p=new Data;


    //*p.a=10;//Compiler not able to understand the pointer and "."
    (*p).a = 10;
    p->b=12.4;
    cout<<(*p).a<<"\t"<<p->b;
    free(p);

    return 0;
}

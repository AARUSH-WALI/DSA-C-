#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int *p = (int*)malloc(n*sizeof(int));
    // For C++ use
    //int *p new int(n);
    if(p == NULL){ //if(null == nullptr)
        cout<<"Memory Allocation Failed..!"<<endl;
        exit(1);
    }
    else{
        for(int i=0;i<n;i++){
            scanf("%d",p+i);
        }
        for(int i=0;i<n;i++){
            printf("%d\t",*(p+i));
    }
}
    free(p); // Use in C
    //delete p;  //use in C++
    return 0;
}

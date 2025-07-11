#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if(ptr!=NULL){
        cout<<"Memory Allocated Successfully: \n";
        for(int i=0;i<5;i++){
        //cin>>ptr[i];
        cin>>*(ptr+i);
    }

    for(int i=0;i<5;i++){
        //cout<<ptr[i]<<" ";
        cout<<*(ptr+i)<<" ";
    }
    }
    else{
        cout<<"Fail to allocate: \n";
    }

    free(ptr);    // use to deallocate memory which is allocated by malloc
    ptr=NULL;     //Use to avoid dangling Pointer
    return 0;
}
/*

malloc(): it stands for memory allocation, it allocates memory dynamically.
- Allocates memory in bytes.
- We must pass number of bytes we need.
- Returns NULL on failure.
- Allocates contiguous memory.
- Returns void pointer, so needs typecasting.
*/

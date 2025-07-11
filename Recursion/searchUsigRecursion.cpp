`#include<iostream>
using namespace std;

int search(int arr[], int t, int n){
    static int i=0;
    if(n==0){
        return -1;
    }
    if(arr[i]==t){
        return i;
    }
    else{
        i++;
        search(arr,t,n-1);
    }
}

int main(){
    int arr[5] = {10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    int t=40;
    cout<<"Index: "<<search(arr,t,n);
    return 0;
}

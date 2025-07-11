#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int i=0;
    if(n==0){
        return 0;
    }
    return arr[0]+sum(arr+1,n-1);//arr[n-1]+sum(arr,n-1)
}

int main(){
    int arr[5] = {10,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Sum: "<<sum(arr,n);
    return 0;
}

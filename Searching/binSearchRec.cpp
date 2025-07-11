#include<iostream>
using namespace std;

int search(int arr[], int t, int n, int s, int e){
    static int i=0;
    int mid = s+(e-s)/2;
    if(n==0){
        return -1;
    }
    if(arr[mid]==t){
        return mid;
    }
    else if(arr[mid]<t){
        search(arr,t,n,mid+1,e);

    }
    else{
        search(arr,t,n,s,mid-1);
    }

}

int main(){
    int arr[5] = {10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int t=50;
    int s=0;
    int e=n-1;
    cout<<"Index: "<<search(arr,t,n,s,e);
    return 0;
}

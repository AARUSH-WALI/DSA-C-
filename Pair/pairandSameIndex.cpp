#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    pair <int, int> p[6];
    int arr[6] = {10,12,11,19,17,16};
    for(int i=0;i<6;i++){
        //p[i].first = i;
        //p[i].second = arr[i];
        p[i] = make_pair(arr[i],i);
    }

    sort(p,p+6);
    for(int i=0;i<6;i++){
        cout<<"Index: "<<p[i].second<<" and "<<"Value: "<<p[i].first<<endl;
    }




}

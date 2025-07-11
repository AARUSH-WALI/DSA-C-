#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v={10,20,30,15,25};
    int sum=0;
    for(auto i:v){
        sum+=i;
    }
    cout<<"Sum = "<<sum<<endl;

    int max_ele = v[0];
    for (auto i: v){
        if (i > max_ele) {
            max_ele = i;
        }
    }
    cout<<"Largest Number = "<<max_ele<<endl;

    cout<<"Reversing the Vector: ";
    for(int i=0;i<v.size()/2;i++){
        swap(v[i],v[v.size()-1-i]);
    }
    //reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }


    cout<<"Sub Arrays: "<<endl;
    for (int s=0;s<v.size();++s) {
        vector<int> sub;
        for (int e=s; e<v.size();++e) {
            sub.push_back(v[e]);

            for (int x:sub) {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }


    cout<<"Intersection: "<<endl;
    vector<int> v1={15,26,33,55,10};
    vector<int> ans;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v1.size();j++){
            if(v[i]==v[j]){
                ans.push_back(v[i]);
            }
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}


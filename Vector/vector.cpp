#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);


    while( ! v.empty()){
        cout<<v[v.size()-1]<<" ";
        v.pop_back();
        //40 30 20 10
    }
    cout<<"\n\n";

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;
}

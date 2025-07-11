#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> *v = new vector<int>;
    int n;
    for(int i=0;i<5;i++){
        cin>>n;
        v->push_back(n);
    }
    for(auto i: *v){
        cout<<i<<" ";
    }
    return 0;
}



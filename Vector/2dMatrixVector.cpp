#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> v;
    for(int i=0;i<3;i++){
        vector<int> temp;
        for(int j=0;j<3;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        v.push_back(temp);
        //temp.erase(temp.begin(), temp.end());//If temp vector was is defined globally.
    }
    for(auto x: v){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}

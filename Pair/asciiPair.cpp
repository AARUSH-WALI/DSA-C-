#include<iostream>
using namespace std;
int main(){
    pair <char, int> p[256];
    for(int i=0;i<256;i++){
        p[i].first = i;
        p[i].second = static_cast<char>(i);
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}

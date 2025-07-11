#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={23,33,66,55,36,12};

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<*v.begin() <<endl;
    cout<<*(v.end()-1)<<endl;


    return 0;
}

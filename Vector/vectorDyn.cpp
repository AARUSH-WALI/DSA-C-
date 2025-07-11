#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> *v = new vector<int>;
    v->push_back(10);
    (*v).push_back(20);

    v->push_back(30);//This will run perfectly
    v->pop_back();

    v->resize(4);
    (*v)[2] = 30;//This will not work until resize operation is used above to increase the size.
    //(*v)[2] = 50;//0 output at the index 3 until value at index 3 is added
    (*v)[3] = 30;

    for(auto i: *v){
        cout<<i<<" ";
    }
    return 0;
}



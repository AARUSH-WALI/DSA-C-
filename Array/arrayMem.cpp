#include <iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int i=0;
    while(i!=5){
        //printf("%d \t", &arr[i]);//6422064         6422068         6422072         6422076         6422080
        //printf("%d \t", arr+i);//6422064         6422068         6422072         6422076         6422080
        printf("%d \t",*arr+i);//10     11     12      13     14
        i++;
    }
    return 0;
}

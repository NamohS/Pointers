#include <iostream>
using namespace std;
int main (){
    int var[5]={10,5,6,7,8};
    int *ptr=&var[0];
    int pos;
    cin>>pos;
    ptr+=pos;

    cout<<*ptr;
}
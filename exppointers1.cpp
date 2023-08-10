#include <iostream>
using namespace std;
int main (){
    int var[5]=10;
    int *ptr=&var;
    cout<<var<<endl; //value of var
    cout<<*ptr<<endl; //value at address
    cout<<&var<<endl; //given by ptr
    cout<<ptr<<endl;//address of var
    cout<<&ptr<<endl;//address of ptr

}

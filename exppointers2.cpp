#include <iostream>
using namespace std;
int main (){
    int var[5]={10,5,6,7,8};
    int *ptr=&var[0];
    for(int i=0;i<5;i++)
    {
        
        cout<<ptr<<"  "<<*ptr<<endl;

        ptr++;
    }
    



}
#include <iostream>
using namespace std;
int main (){
    double var[5]={10.0,5.5,6.56,7.52,8.14};
    double *ptr=&var[0];
    for(int i=0;i<5;i++)
    {
        
        cout<<ptr<<"  "<<*ptr<<endl;

        ptr++;
    }
    



}
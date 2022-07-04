#include<iostream>
using namespace std;
int main(void){
     int a,b,c;
    a=10;
    b=5;
    c=1000;
    
    cout<< " Is a>b and a<c :"<< (a>b && a<c)<<endl;
    cout<< " Is a>b and a<c :"<< (a>b && a>c)<<endl;
    cout<< " Is a>b and a<c :"<< (a>b || a<c)<<endl;
     cout<< " Is a>b and a<c :"<< (a>b || a>c)<<endl;
    // cout<< " Is a>b and a<c :"<< (a>c || a>b)<<endl;
    
    return 0;
}
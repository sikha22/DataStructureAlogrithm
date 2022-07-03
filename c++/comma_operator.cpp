#include<iostream>
using namespace std;
int main(void){
      int a,b,c;
      cout<<"Enter three variables :"<<endl;
      cout<<" a :";
     cin>>a;
    cout<<" b :";
     cin>>b;
     cout<<" c :";
     cin>>c;
     //comma operator always check the last value 
     if(a>b , a>c){
         cout<<"Hello";
     }
     else {
         cout<<" Bye ";
     }
           
      return 0;
}

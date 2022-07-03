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
     if(a>b && a>c){
         cout<<"a is the greater ";
     }
     else if(b>c){
         cout<<" b is the greatest";
     }
     else{
         cout<<" c is the greatest";
     }

          
      return 0;
}

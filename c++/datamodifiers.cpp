#include<iostream>
using namespace std;
int main(void){

        int mySec1=7;
  int mySec2=10;
//addition
  int sum = mySec1+mySec2;

  //sizeof
  cout<<"size of sum in bytes "<<sizeof(sum)<<endl;

/*
 int = 4 byytes
 1 byte = 8 bit
 size in bits = 32-1
 2^31 to 2^31-1
*/
 unsigned int myInt1=7;
 cout<<"size of myInt1 in bytes "<<sizeof(myInt1)<<endl;

 unsigned int myInt2=-7; //0 to 2^32-1
 cout<<"size of myInt2 in bytes "<<sizeof(myInt2)<<endl;

  unsigned long long int myLong=10;
 cout<<"size of myLong in bytes "<<sizeof(myLong)<<endl; 


 return 0;
}
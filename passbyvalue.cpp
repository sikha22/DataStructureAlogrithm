#include<iostream>
using namespace std;
void swap(int x, int y)
{ 
    int temp;
    x=temp;
    x=y;
    y=temp;
    //x++;
    // cout<<x<<endl;
}
int main()
{
    int a=10,b=20;
    
    swap(a,b);
    cout<<a<<endl<<b<<endl;
}
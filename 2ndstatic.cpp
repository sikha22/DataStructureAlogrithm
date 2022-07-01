#include<conio.h>
#include<iostream>
using namespace std;
//WAP on static array
void display(int a[],int size);
int main()
{
int arr[5];
for(int i=0;i<5;i++)//i want to enter 4 element so my iteration will go from 0 to 4
{
//to enter multiple time
cout<<"Enter the data value"<<i+1<<":";//to show on console for each iteration
cin>>arr[i];//take the input
}
display(arr,5);
getch();
return 0;
}
void display(int arr[],int size)
{
cout<<"values in the array: ";
for(int i=0;i<5;i++)//i want to enter 4 element so my iteration will go from 0 to 4
{
cout<<arr[i]<<" ";
}

}
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
int n,x,item;
int arr[10];
cout<<"\nEnter the number of elements to be inserted:\t ";
cin>>n;
cout<<"\nEnter the elements of the array\n";
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
cout<<"\nEnter the Index where You want to Insert \t";
cin>>x;
cout<<"\nEnter the ITEM to be Inserted: \t";
cin>>item;

//Shift the Elements of the Array

for(int i=n-1; i>=x; i--)
{
arr[i+1] = arr[i];
}
arr[x] =item;
n = n+1;
cout<<"\nARRAY\n";
for(int i=0; i<n; i++)
cout<<arr[i]<<"\t";

cout<<"\n\n* * * DELETION * * *\n";
cout<<"\nEnter the Index where You want to delete\t";
cin>>x;

for(int i=x; i<n-1; i++)
{
arr[i] = arr[i+1];
}
n=n-1;

cout<<"\nARRAY\n";
for(int i=0; i<n; i++)
cout<<arr[i]<<"\t";

getch();
return 0;
}
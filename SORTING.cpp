#include<iostream>
#include<conio.h>
using namespace std;

int* arr;
int n, size;

void print()
{
cout<<"\n";
for(int i=0; i<n; i++)
cout<<arr[i] << "\t";
}

void bubble_sort()
{
bool flag = true;

for(int i=0; flag && i<n; i++)
{
flag = false;
for(int j=0; j<n-i-1; j++)
{
if(arr[j] > arr[j+1])
{
n = arr[j];
arr[j] = arr[j+1];
arr[j+1] = n;
flag = true;
}
}
cout<<"\n\nPASS-"<<i+1 <<"\n";
print();
}
}

int main()
{
cout<<"\nEnter the size of the Array:\t";
cin>>n;
arr = new int[n];

cout<<"\nEnter the elements of the array\n";
for(int i=0; i<n; i++)
{
cin>>arr[i];
}

bubble_sort();
// print();
getch();
return 0;
}
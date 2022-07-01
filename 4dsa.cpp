#include<conio.h>
#include<iostream>
using namespace std;
/*
INSERT(ARR, N, POS, ITEM)
//LA is a linear array with N element
//K is integer positive where K < N and LB = 0
//Insert an element, ITEM in index K
1. [Assign counter]
J = N – 1; // LB = 0
2. Repeat step 2.1 and 2.2 while J >= K
2.1 [shift to the right all elements from J]
LA[J+1] = LA[J]
2.2 [decrement counter] J = J – 1
3. [Stop repeat step 2]
4. [Insert element] LA[K] = ITEM
5. [Reset N] N = N + 1
6. Exit

*/

void show(int arr[],int size);
int main()
{
int *arr, pos, item, size, n;

cout<<"Enter size of array: ";
cin>>size;
arr = new int[size];

cout<<"Enter no. of elements to enter: ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter data value " <<i+1 <<": ";
cin>>arr[i];
}
show(arr,n);

cout<<"\n Enter data-value to insert: ";
cin>>item;
cout<<"\n Enter index position where to insert: ";
cin>>pos;

for(int j=n; j>=pos; j--)
{
arr[j+1] = arr[j];
}
arr[pos] = item;
n++;

show(arr,n);
//delete []a;

getch();
return 0;
}

void show(int arr[],int size)
{
cout<<"values in the array: ";
for(int i=0;i<size;i++)//i want to enter 4 element so my iteration will go from 0 to 4
{
cout<<arr[i]<<" ";
}

}
//Algoritm and program for deletion
#include<conio.h>
#include<iostream>
using namespace std;
/*
DELETE(ARR, N, POS, ITEM)
1. ITEM = ARR[POS]
2. Repeat for I = POS to N-1
2.1 [Shift element, forward]
ARR[I] = ARR[I+1]
3. [end of loop]
4. [Reset N in LA]
N = N – 1
5. Exit

*/
void show(int arr[],int n);
int main()
{
int *arr, pos, n;

cout<<"Enter size of array: ";
cin>>n;
arr = new int[n];


for(int i=0;i<n;i++)
{
cout<<"Enter data value " <<i+1 <<": ";
cin>>arr[i];
}
show(arr,n);


cout<<"\n Enter index position which u want to delete :";
cin>>pos;

for(int i=pos; i<(n-1); i++)
{
arr[i] = arr[i+1];
}

n--;

show(arr,n);
//delete []a;

getch();
return 0;
}

void show(int arr[],int n)
{
cout<<"values in the array: ";
for(int i=0;i<n;i++)//i want to enter 4 element so my iteration will go from 0 to 4
{
cout<<arr[i]<<" ";
}

}
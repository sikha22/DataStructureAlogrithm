#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{

//Implement the Merging of arr1 and arr2

int n1, n2;

cout<<"\nEnter the number of elements in first array: \t";
cin>>n1;
int *arr1 = new int[n1];

cout<<"\nEnter the elements of array 1\n";
for(int i=0; i<n1; i++)
{

cin>> arr1[i];
}


cout<<"\nEnter the number of elements in second array: \t";
cin>>n2;
int *arr2 = new int[n2];

cout<<"\nEnter the elements of array2\n";
for(int i=0; i<n2; i++)
{

cin>> arr2[i];
}


int n3 = n1+n2;
int *result = new int[n3];

int i=0, j=0, k=0; //i, j and k are the poiters for arr1, arr2 and result respectively

while(i<n1 && j< n2)
{
if(arr1[i] <= arr2[j])
{
result[k] = arr1[i]; k++; i++;
}
else
{
result[k] = arr2[j]; k++; j++;
}
}

//Copy the remaining elements of the array to the result

if(i == n1) //arr2 is having the element bcoz arr1 has no elements now
{
while(j<n2) {result[k] = arr2[j]; j++; k++;}
}
else
{
while(i<n1) {result[k] = arr1[i]; i++; k++; }
}

cout<<"\n * * Result of Merging * * *\n";
for(int i=0; i<n3; i++)
cout<<result[i]<<"\t";


return 0;
}

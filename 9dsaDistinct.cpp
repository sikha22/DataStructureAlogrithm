#include<iostream>
using namespace std;
/*Write an algorithm and program to print the distinct element of an array
:-i/p 10,20,10,30,10,5,6,9
o/p:-10,20,30,5,6,9
Algorithm 8.Distinct element(UB,LB,I,J,ARR)
Step 1.Take the input for the element of an array
Step 2.for I=0 to n-1
Step 2.1. for j=0 to i
if (arr[i]==arr[j])
break

Step 2.2 if(i==j)
print the arr[i]
*/
int main()
{

int i,j,size;
cout<<"How the size of an array ";
cin>>size;
int arr[size];
cout<<"\n enter the element for an array";
for(i=0;i<size;i++)
{

cin>>arr[i];//take th
}
for(i=0;i<size;i++)
{
for(j=0;j<i;j++)

if(arr[i]==arr[j])
break;

if(i==j)
cout<<arr[i]<<" ";

}
return 0;


}
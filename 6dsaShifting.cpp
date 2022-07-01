#include<iostream>
using namespace std;
/* algorithm and program to remove the duplicate element from an array
i/p:44 22 44 99
o/p:44 22 99
Algorithm 6 : Duplicate element deletion (UB,LB,I,ARR)
Step1: Take the input for all the element of an array ARR
Step2: For I=LB to n-1
Step 2.1: for j=i+1 to n-1
Step 2.1.1 if(ARR[I]==ARR[J])
for K=J to N-1
ARR[K]=ARR[K+1]
n=n-1
k=k+1
else
j=j+1
step 3 .Print the array
*/
int main()
{
int i,j,k,n,a[20];
cout<<"How many element u want to enter ";
cin>>n;

cout<<"\n enter the element for an array";
for(i=0;i<n;++i)
cin>>a[i];//take the input for an array
for(int i=0;i<n;i++)//outer loop i
{
for(int j=i+1;j<n;)//inner loop j which will complete its iteration then i will be increased
{
if(a[i]==a[j])//when u get the duplicate element it will be true
{
for(k=j;k<n-1;k++)//it will shift all the element when if condition is matched for duplicate element
{
a[k]=a[k+1];//shift
n--;
}
}
else
{
j++;
}
}
}
cout<<"\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
return 0;
}
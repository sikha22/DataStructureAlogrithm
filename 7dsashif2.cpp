#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,a[30];
cout<<"How many elements?";
cin>>n;
cout<<"\nEnter elements of array\n";
for(i=0;i<n;++i)
cin>>a[i];//take the input for an array
for(i=0;i<n;++i)//inner loop j which will complete its iteration then i will be increased
for(j=i+1;j<n;)//when u get the duplicate element it will be true
{
if(a[i]==a[j])//it will shift all the element when if condition is matched for duplicate element
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];//shift
--n;
}
else
++j;
}
cout<<"\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";

return 0;
}
#include<iostream>
using namespace std;
/*I/p:-100,200,100,400,200
o/p:-100 -> 2
200 ->2
400->1
*/
int main()
{
int freq[50];
int i,j,count,size;
cout<<"How the size of an array ";
cin>>size;
int arr[size];
cout<<"\n enter the element for an array";
for(i=0;i<size;i++)
{

cin>>arr[i];//take the input for an array
//intially the freuency will be set to-1
freq[i]=-1;
}
for(i=0;i<size;i++)
{
count=1;
for(int j=i+1;j<size;j++)
{
if(arr[i]==arr[j])//if its same
{
count++;//incerement the counter
//and we should take care that not to count the frequency of the same element again
freq[j]=0;
}

}
if(freq[i]!=0)
{
freq[i]=count;
}
}
cout<<"frequency of each element in an array \n ";
for(i=0;i<size;i++)
{
if(freq[i]!=0)
{
cout<<arr[i]<<"have a frequency of "<<freq[i]<<"times"<<endl;

}
}
}
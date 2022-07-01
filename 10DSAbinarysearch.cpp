#include<iostream>
#include<stdio.h>
using namespace std;

int binarySearch(int a[],int left,int right,int item)
{

if(right>=left)
{

int mid=left+(right-left)/2;//calculate the mid point
//if the element is at the mid only
if(a[mid]==item)
return mid;
//now check if the item is smaller or greater then the mid and based on same skip the other half
if(a[mid]>item)
return binarySearch(a,left,mid-1,item);
//if u skip the first half then beg means left will change
return binarySearch(a,mid+1,right,item);
}
return -1;



}
int main(void)
{
int arr[]={200,600,800,900,1900};//give the sorted input
int item=1900;
int n = sizeof(arr) / sizeof(arr[0]);
int check=binarySearch(arr,0,n-1,item);//call the function
if(check==-1)
{
cout<<"Element dosesn't exist";
}
else
{
cout<<"Element is presentat index"<<check;

}
return 0;
}
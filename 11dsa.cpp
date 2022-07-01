#include<iostream>
#include<stdio.h>
using namespace std;

int binarySearch(string a[],int left,int right,string item)
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
int main()
{
// int arr[]={200,600,800,900,1900};//give the sorted input
// int item=1900;

string arr[] = { "anita", "cherry", "geetika", "shailja"};
string item= "shailja";
int n = 4;
// int n = sizeof(arr) / sizeof(arr[0]);
int check=binarySearch(arr,0,4,item);//call the function
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


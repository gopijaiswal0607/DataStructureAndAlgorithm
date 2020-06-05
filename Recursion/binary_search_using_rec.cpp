#include<iostream>
using namespace std;
int binary_search_fun(int *arr,int s,int e,int n,int x)
{
int mid=(s+e)/2;
if(arr[mid]==x)
     return mid;
if(arr[mid]>x && s<e)
   return binary_search_fun(arr,s,mid-1,n,x);
 else if(arr[mid]<x&& s<e)
    return binary_search_fun(arr,mid+1,e,n,x);
return -1;
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
cout<<binary_search_fun(arr,0,6,7,8)<<endl;
return 0;}

#include<iostream>
using namespace std;
int linear_search(int *arr,int i,int n,int x)
{
if(arr[i]==x)
    return i;
if(i==n)
     return -1;
return linear_search(arr,i+1,n,x);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x;
    cin>>x;
cout<<linear_search(arr,0,n,x);
}

#include<iostream>
using namespace std;
int lastIndex(int *arr,int vid,int N,int k)
{
if(vid==N)
     return -1;
int rr=lastIndex(arr,vid+1,N,k);
if(arr[vid]==k && rr==-1)
      return vid;
else
     return rr;
}
int main()
{
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
     cin>>ar[i];
int k;
cin>>k;
cout<<lastIndex(ar,0,n,k)<<endl;




}



#include<iostream>
using namespace std;
int power(int a,int b)
{
	if(b==0)
		  return 1;
	return a*power(a,b-1);
}
int fastPower(int a,int b)
{
if(b<=0)
    return 1;
return fastPower(a,b/2)*fastPower(a,b-b/2);
}
int main()
{
//ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
   int a,b;
   cin>>a>>b;
   cout<<power(a,b)<<endl;//o(n)
   cout<<fastPower(a,b)<<endl;//o(log n)
	return 0;
}

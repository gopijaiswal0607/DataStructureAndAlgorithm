//###################################### Ladder Problem  ######################################
//# There are n no of step and person can jumps on 1 or 2 or 3 step .count the no of ways to climb.
#include<iostream>
using namespace std;
int Ladder(int n,int k)
{
if(n==0)
	  return 1;
if(n<0)
	return 0;
int Ans=0;
for(int i=1;i<=k;i++)
	Ans+=Ladder(n-i,k);
return Ans;

}
 int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	cout<<Ladder(n,k)<<endl;
	return 0;
} 
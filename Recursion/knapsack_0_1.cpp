#include<iostream>
using namespace std;
int knapsack(int n,int c,int *weight,int *price)
{
if(n==0|| c==0)
	  return 0;
int ans=0;
int inc=0,exc=0;
if(weight[n-1]<=c)
inc=price[n-1]+knapsack(n-1,c-weight[n-1],weight,price);
exc=knapsack(n-1,c,weight,price);
ans=max(inc,exc);
return ans;


}
int main(int argc, char const *argv[])
{
	int n=4,c=7;
	cin>>n>>c;
	int weight[]={1,2,3,5};
	int price[]={30,20,30,100};
	cout<<knapsack(n,c,weight,price)<<endl;
	
	return 0;
}
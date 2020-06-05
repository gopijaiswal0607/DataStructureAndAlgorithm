//######################################## Friends Pairing Problems ##################################### 
// Given N,friends who want to go to a party on bikes. Each guy can go as single ,or as a couple.
// Find the Number of ways in which N friend cna go to the party.
// N=3,Ways=4;
#include<iostream>
using namespace std;
int No_of_ways(int n)

 if(n==0 or n==1)
 	 return 1;
if(n==2)
	  return  2;
return 1*No_of_ways(n-1)+(n-1)*No_of_ways(n-2); // like  select 1 and subprob f(n-1) and he can select 1 from n-1 and sumprob f(n-2);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<No_of_ways(n)<<endl;

	return 0;
}
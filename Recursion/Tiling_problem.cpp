//############################################# PLACE THE TILES ############################################
//#--------------------------------------------------------------------------------------------------------#
//# Given a wall of size of 4 X N,and tiles of size(1,4) and (4,1)
// In how many ways you can build the wall?
#include<iostream>
using namespace std;
int CountTheWay(int n)
{
if(n<=3)
	return 1;
return CountTheWay(n-1)+CountTheWay(n-4);



}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<CountTheWay(n);
	return 0;
} 


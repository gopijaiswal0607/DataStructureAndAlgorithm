// Conversion of string to integer using recursion 
#include<iostream>
#include<cstring>
using namespace std;

int StringToInt(char*s,int n)
{
if(n==0)
	  return 0;
int digit=s[n-1]-'0';
int small_Ans=StringToInt(s,n-1);
return small_Ans*10+digit;
}
int main(int argc, char const *argv[])
{
	char st[10];
	cin>>st;
    int n=strlen(st); 
	cout<<StringToInt(st,n)<<endl;

	return 0;
}
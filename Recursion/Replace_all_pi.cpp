// Replace all pi in a string with 3.14 using rec.
#include<iostream>
using namespace std;

void replaceAllPi(char a[],int i)
{
	// base case
if(a[i]=='\0' || a[i+1]=='\0')
return;
// Look for pi for current location
if(a[i]=='p' && a[i+1]=='i')
{
int j=i+2;
// take j to the end of the array
while(a[j]!='\0')
	j++;
// shifting right to left
while(j>=i+2)
{
a[j+2]=a[j];
j--;

}
// replace +recursive call for rem part
a[i]='3';
a[i+1]='.';
a[i+2]='1';
a[i+3]='4';
replaceAllPi(a,i+4);
}
else
	replaceAllPi(a,i+1);

}


int main(int argc, char const *argv[])
{
char arr[1000];
 cin>>arr;
 replaceAllPi(arr,0);
 cout<<arr;




	return 0;
}
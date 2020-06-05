// ################ Gererating all the valid (balanced) peranthesis  ############################################
// Exmaple (()),()() for len 2.
//#################################### implementation ######################################################
#include<iostream>
using namespace std;
 void Generate_brackets(char*out,int n,int idx,int open,int close)
 {
if(idx==2*n)
{
out[idx]='\0';
cout<<out<<" "<<endl;
return ;
}
if(open<n)
{
out[idx]='(';
Generate_brackets(out,n,idx+1,open+1,close);
}
if(close<open)
{
out[idx]=')';
Generate_brackets(out,n,idx+1,open,close+1);
}
}
int main(int argc, char const *argv[])
{
	
    char out[100];
    int n=2;
   // cin>>n;
    Generate_brackets(out,n,0,0,0);
	return 0;
}
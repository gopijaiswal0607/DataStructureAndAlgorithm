#include<iostream>
using namespace std;
void genrate_subsequence(char *in,char*out,int i,int j)
{if(in[i]=='\0'){
out[j]='\0';
cout<<out<<endl;
return ;
}
out[j]=in[i];
genrate_subsequence(in,out,i+1,j+1);

genrate_subsequence(in,out,i+1,j);



}
int main(){
char in[10];
char out[10];
cin>>in;
genrate_subsequence(in,out,0,0);

return 0;}

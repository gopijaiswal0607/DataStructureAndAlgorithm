#include<iostream>
#include<string>
using namespace std;
void genrate_subset(int n,string s)
{
int j=0;
while(n>0)
    {
    if(n&1)
      cout<<s[j];

  j++;
 n=n>>1;}
 cout<<endl;
}
void Filterchar(string s)
{
int n=s.length();
for(int i=0;i<(1<<n);i++)
    {
    genrate_subset(i ,s);
    }

}
int main()
{
string s;
cin>>s;
Filterchar(s);

return 0;
}

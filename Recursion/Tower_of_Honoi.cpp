#include<iostream>
using namespace std;
void TOH(int n,char src,char helper,char dest)
{
if(n==0){
return ;}
TOH(n-1,src,dest,helper);
cout<<"Move " <<n<<" Disk "<<" from "<<src<<" to "<<dest<<endl;
TOH(n-1,helper,src,dest);
}
int main()
{
int n;
cout<<"Enter the number of disks"<<endl;
cin>>n;
TOH(n,'A','B','C');
return 0;
}

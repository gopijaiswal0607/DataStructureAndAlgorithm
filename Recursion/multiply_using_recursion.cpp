// Multiplication using recursion without using multiplication (*) operator
#include<iostream>
using namespace std;
int mul(int a,int b){
if(a>0 && b<0)
    {
    swap(a,b);
    }
else if(a<0 && b<0)
{
    a=-a;
    b=-b;
}
if(b>0)
    {
    return (a+mul(a,b-1));
    }
    }
int main()
{
int a,b;
cin>>a>>b;
cout<<mul(a,b);
}

#include<iostream>
using namespace std;
void remove_duplicate(char *arr,int i,int j)
{
if(arr[j]=='\0')
{
    arr[i]='\0';
    return ;
}
 if(arr[i]!=arr[j])
    {
    i++;
 arr[i]=arr[j];
    remove_duplicate(arr,i,j+1);
    }
else
    remove_duplicate(arr,i+1,j);
}

int main()
{
int t;
cin>>t;
while(t--)
    {
    char arr[50];
    cin>>arr;
remove_duplicate(arr,0,0);
  cout<<arr;

    }

}

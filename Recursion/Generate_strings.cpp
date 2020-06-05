//################################### Generating_all_valid_string #######################################
// Exmaple 1-A,2->B,-----------26->Z;
// if number is 1234 then valid string 1234(ABCD,(12)34(LCD),1(23)4(AWD). 
#include<iostream>
using namespace std;
void Generate_string(char*input,char*out,int i,int j)
{
// Base case:
if(input[i]=='\0')
{
out[j]='\0';
cout<<out<<endl;
return;
}
// One digit
if(input[i]!='0'){
int digit=input[i]-'0';
out[j]=digit+'A'-1;
Generate_string(input,out,i+1,j+1);}
// two digit
if(input[i+1]!='\0')
{
int second_digit=input[i+1]-'0';
int no=(input[i]-'0')*10+second_digit;
if(no<=26)
{
out[j]='A'+no-1;
Generate_string(input,out,i+2,j+1);
}
}

}
int main(int argc, char const *argv[])
{
	char input[100],out[100];
	cin>>input;
	Generate_string(input,out,0,0);
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
string s;
int l,j=0;
cout<<"\n Enter the string ::";
cin>>s;
l=s.length();
for(int i=0;i<l;i++)
{
if(s[i]=='0' || s[i]=='1')
  j=j;
else
 j++;
}
if(j==0)
{
if((s[l-3]=='0' && s[l-2]=='0' && s[l-1]=='1')||(s[l-3]=='0' && s[l-2]=='1' && s[l-1]=='1')|| (s[l-3]=='1'  && s[l-2]=='1' && s[l-1]=='1'))
  cout<<"\n String rejected at q1 stage \n ";
else if((s[l-3]=='0'&& s[l-2]=='1' && s[l-1]=='0')||(s[l-3]=='1' && s[l-2]=='1' && s[l-1]=='0'))
  cout<<"\n String rejected at q2 stage \n";
else if(s[l-3]=='1' && s[l-2]=='0' && s[l-1]=='1')
  cout<<"\n String accepted at q3 stage \n";
else
  cout<<"\n String rejected  at q0 stage \n";
}
else
 cout<<"\n Numbers are not in the binary form \n";
return 0;
}

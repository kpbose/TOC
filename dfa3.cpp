#include<iostream>
using namespace std;
int main()
{
string s;
int l;
cout<<"\n Enter the string ::";
cin>>s;
l=s.length();
int j=0,k=0;
for(int i=0;i<l;i++)
{
if(s[i]=='a')
  j++;
else if(s[i]=='b')
  k++;
}
int m,n;
m=j%3;
n=k%3;
if(m==0 && n==0)
   cout<<"\n String accepted at q0 stage";
else 
    if (m==0 && n==1)
    cout<<"\n String rejected at q3 stage";
else 
    if (m==1 && n==0)
    cout<<"\n String rejected at q1 stage";
else 
    if (m==2 && n==0)
    cout<<"\n String rejected at q2  stage";

else 
    if (m==0 && n==2)
    cout<<"\n String rejected at q6 stage";

else 
    if (m==1 && n==1)
    cout<<"\n String rejected at q4 stage";

else 
    if (m==2 && n==1)
    cout<<"\n String rejected at q5 stage";
else 
    if (m==1 && n==2)
    cout<<"\n String rejected at q7 stage";
else 
    if (m==2 && n==2)
    cout<<"\n String rejected at q8  stage";
cout<<"\n";
return 0;
}

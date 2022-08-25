#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"\n Enter the size of the array::";
cin>>n;
int a[n];
cout<<"\n Enter the elements of the array::";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int j=0,k=0;
for(int i=0;i<n;i++)
{
if(a[i]==1)
  j++;
else
  j==0;
if(j==3)
 k++;
}
if(k>=1)
  cout<<"\n Input accepted at q3 state \n";
else
  cout<<"\n Input not accepted.Machine failed at  q"<<j<<" state \n";
return 0;
}

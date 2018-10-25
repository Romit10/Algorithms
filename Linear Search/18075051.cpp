#include<iostream.h>
using namespace std;
void Lsearch(int A[100],int n,int x)
{
for(int i=0;i<n;i++)
{
if (A[i]==x)
{
flag=1;
cout<<"Found at position"<<i+1;
break;
}
}
if(flag==0)
cout<<"Not Found";
}

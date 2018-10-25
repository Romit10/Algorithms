#include<iostream.h>
using namespace std;
void main()
{
int n;
cin>>n;
int A[n];
int max=0;
for(int i=0;i<n;i++)
{
if (A[i]>max)
max=A[i];
}
cout<<max<<"is maximum";
}

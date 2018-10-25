#include<iostream.h>
using namespace std;
void Bsearch(int A[100],int n,int x)
{
int L=0,U=n-1,M,flag=0;
while(L<=U)
{
M=(L+U)/2;
if (x<A[M])
U=M-1;
else if(x>A[M])
L=M+1;
else
{
flag=1;
cout<<"Found at position"<<M+1;
}
if(flag==0)
cout<<"Not Found";
}


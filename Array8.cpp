// Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without	
// using	any	sorting	algorithm.	

#include<iostream>
using namespace std;

int main()
{
	int n, f0=0, f1=0, f2=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]==0)
		f0++;
		else if(a[i]==1)
		f1++;
		else
		f2++;
	}
	for(int i=0; i<f0; i++)
	a[i]=0;
	for(int i=f0; i<f0+f1; i++)
	a[i]=1;
	for(int i=f0+f1; i<f0+f1+f2; i++)
	a[i]=2;
	for(int i=0; i<n; i++)
	cout<<a[i]<<" ";
}

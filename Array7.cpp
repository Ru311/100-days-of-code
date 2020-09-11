// Given	an	number	n.	Find	the	number	of	occurrences	of	n	in	the	array.	
#include<iostream>
using namespace std;
int main()
{
	int n, m, flag=0;
	cin>>n>>m;
	int a[m];
	for(int i=0; i<m; i++)
	{
		cin>>a[i];
		if(a[i]==n)
		flag++;
	}
    cout<<flag;
	
}

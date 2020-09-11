#include<stdio.h>
#include<iostream>

int coin(int n)
{
	int a=0;
	if(n>=10)
	{
		a=n/10;
		n=n%10;
		if(n==0)
		return a;
		else
		{
		a=a+coin(n);
		return a;}
	}
	if(n>=5)
	{
		a=n/5;
		n=n%5;
		if(n==0)
		return a;
		else
		{
			a=a+coin(n);
			return a;
		}
	}
	else
	return n;
}

int main()
{
	int n;
	std::cin>>n;
	std::cout<<coin(n);
}

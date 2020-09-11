#include<stdio.h>
#include <bits/stdc++.h>

long int GCD(long int a, long int b)
{
	if(b==0)
	return a;
	else
	return GCD(b,a%b);
}

main()
{
	long int a,b;
	scanf("%ld %ld",&a,&b);
	if(b>a)
    {
    	long int c=a;
    	a=b;
    	b=c;
	}
	printf("%ld",GCD(a,b));
}

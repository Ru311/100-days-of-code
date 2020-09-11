#include<stdio.h>
#include <bits/stdc++.h>

long long int lcm(long long int a, long long int b)
{
	long long int c=a*b;
	for(long long int i=1; i<=b; i++)
	{
		if((a*i)%b==0)
		{
			c=i*a;
			break;
		}
	}
	return c;
	
}

main()
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	if(b>a)
    {
    	long long int c=a;
    	a=b;
    	b=c;
	}
	printf("%lld",lcm(a,b));
}

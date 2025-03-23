#include<stdio.h>
int main()
{
	long double rate,capital,deposit;
	int i=1,n;
	printf("please enter 'rate','capital','n':\n");
	scanf("%Lf%Lf%d",&rate,&capital,&n);
	rate++;
	while (i<=n)
	{
		rate*=rate;
		i++;
	}
	deposit=capital*rate;
	printf("result=%Lf",deposit);
	return 0;
}

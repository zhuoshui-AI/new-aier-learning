#include<bits/stdc++.h>
using namespace std;

long long func(int a,int b)
{
	return(b==0)?a:func(b,a%b);
}
int main ()
{
int a=2024,b=1024;
long long c=func(a,b);
printf("%lld",a/c*b);
}

#include<stdio.h>
int main ()
{
//	int a=2024;
//	int b=0,c=0;
//	for(int i=1;i<1012;i++){
//		if(2024%i==0&&i%2!=0)
//		printf("%d ",i);
//	}
	int b=253;
	int c=0;
	for(int i=2;i<=253;i++){
		if(b/i==0)  c=1;
	}
	printf("%d",c);
	return 0;
}


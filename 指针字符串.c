
#include<stdio.h>
#include<string.h>
#define n 80
int main()
{
	char dest[n] = "ϰ��ƽ�����";
	char  *srt = "�ڶ�ʮ�󱨸���ָ��\"����ǿ���ǿ\"";
	strcat(dest, srt);
	printf("%s", dest);
	return 0;
}

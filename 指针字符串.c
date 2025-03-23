
#include<stdio.h>
#include<string.h>
#define n 80
int main()
{
	char dest[n] = "习近平总书记";
	char  *srt = "在二十大报告中指出\"青年强则国强\"";
	strcat(dest, srt);
	printf("%s", dest);
	return 0;
}

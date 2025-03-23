#include<stdio.h>
int main()
{
	char op;
	int  date1 = 0, date2 = 0;
	printf("please inter dat1 op date2\n");
	scanf("%d,%c,%d", &date1, &op, &date2);
	switch (op)
	{
	case '+':
		printf("%d+%d=%d\n", date1, date2, date1 + date2);
		break;
	case'-':
		printf("%d+%d=%d\n", date1, date2, date1 + date2);
		break;
	case'*':
		printf("%d+%d=%d\n", date1, date2, date1 * date2);
		break;
	case'/':
		printf("%d+%d=%d\n", date1, date2, date1 / date2);
		break;
	default:
		printf("ERROR\n");
		return 0;
	}
}

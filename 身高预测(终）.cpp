#include<stdio.h>
int main()
{
	char sex,sports,diet;
	float faHight,moHight,A;
	printf("please enter'sex' 'father hight'and 'mother hight'\n");
	scanf("%c,%f,%f",&sex,&faHight,&moHight);
	
	if (sex==87) A=(faHight*0.923+moHight)/2;
    else{
		A=(faHight+moHight)*0.54;
	}     //��ĸ���Ӱ��
	printf("A=%f",A);
	printf("Dose he like sports?\n");
	printf("Dose he have a healthy diet?\n");
	scanf(" %c,%c",&sports,&diet);
	if(sports=='y'||'Y')
	A*=1.02;
	if(diet=='Y'||'y')
	A*=1.015;   //�������Ӱ��
	printf("The child's finally hight is:%f",A);
	return 0;
}

#include<stdio.h>
main()
{
	char d[10];
	int i, e;
	printf("���������͂��Ă�������\n");
	scanf("%s" ,&d[0]);
	for (i = 0; d[i]!='\0'; i++)
	{
		d[i]++;
	}
	printf("�Í����������%s", &d[0]);
}
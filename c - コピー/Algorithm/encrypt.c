#include<stdio.h>
main()
{
	char d[10];
	int i, e;
	printf("文字列を入力してください\n");
	scanf("%s" ,&d[0]);
	for (i = 0; d[i]!='\0'; i++)
	{
		d[i]++;
	}
	printf("暗号化文字列は%s", &d[0]);
}
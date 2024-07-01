#include<stdio.h>
main()
{
	int i,e;
	char s;
	printf("処理を入力：");
	scanf("%c", &s);
	printf("整数を入力：");
	scanf("%d %d", &i,&e);
	switch (s)
	{
	case 'd':
		if (i > e)
		{
			printf("最大値は%dです\n",i);
		}
		else
		{
			printf("最大値は%dです\n",e);
		}
		break;
	case 's':
		if (i > e)
		{
			printf("最小値は%dです\n", e);
		}
		else
		{
			printf("最小値は%dです\n", i);
		}
		break;
	case 'g':
		printf("合計は%dです\n", i + e);
		break;
	case 'h':
		printf("平均は%.2fです\n",  (i+e)/2.0);
		break;
		
	
	}
}
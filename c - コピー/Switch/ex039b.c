#include<stdio.h>
main()
{
	int i,e,c,d;
	char s;
	printf("処理を入力：");
	scanf("%c", &s);
	printf("整数を入力：");
	scanf("%d %d %d", &i,&e ,&c);
	switch (s)
	{
	case 'd':
		s
		{
			
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
		printf("合計は%dです\n", i + e+c);
		break;
	case 'h':
		printf("平均は%.2fです\n",  (i+e+c)/3.0);
		break;
		
	
	}
}
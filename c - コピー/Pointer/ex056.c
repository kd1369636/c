#include<stdio.h>
main()
{
	int tb[][3] = { {10,20,30},
				{40,50,60},
				{70,80,90} };
	int* p_tbl, i;
	p_tbl = tb[0];
	printf("2�����z�񂔂����̓��e\n");
	for (i = 0; i < (3 * 3); i++)
	{
		printf("%d ", *p_tbl++);
	}

}
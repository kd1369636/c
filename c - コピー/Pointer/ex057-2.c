#include<stdio.h>
main()
{
	int tb[][3] = { {10,20,30},
				{40,50,60},
				{70,80,90} };
	int* p_tbl, i, e;
	p_tbl = &tb[0][1];
	for (i = 0; i < (3); i++)
	{
		printf("%d ", *p_tbl);
		p_tbl +=3;
	}
}
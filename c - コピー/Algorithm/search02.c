#include<stdio.h>
main()
{
	int i, e, d[11] = { 10,5,30,77,16,3,47,29,37,33,};
	printf("探索地Sを入力\n");
	scanf("%d", &e);
	d[11] = e;
	for (i = 0; e != d[i]; i++);
	if (i == 11)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索地%dを、d%dで発見\n",e,i);
	}

}
#include<stdio.h>
main()
{
	int low, high,mid,s, d[11] = {10,15,18,23,28,35,47,55,68,78,96};
	low = 0;
	high = 10;
	printf("探索地Sを入力\n");
	scanf("%d", &s);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}
		if (s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索地%dを、d[%d]で発見！\n", s, mid);
	}
	
}
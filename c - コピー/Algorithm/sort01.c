#include<stdio.h>
main()
{
	int d[5] = { 20,44,35,25,75 };
	int i, e,w;
	for (i = 0; i < 4; i++)
	{
		for (e = i+1; e < 5; e++)
		{
			if (d[i] > d[e])
			{
				w = d[i];
				d[i] = d[e];
				d[e] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
	printf("%d ", d[i]);
	}
	
}
#include<stdio.h>
main()
{
	int d[5] = { 20,44,35,25,75 };
	int i, e, w;
	for (e = 4; e > 0; e--)
	{
		for (i = 0; i < 4; i++)
		{
			if (d[i] > d[i + 1])
			{
				w = d[i];
				d[i] = d[i + 1];
				d[i + 1] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}

}
#include<stdio.h>
main()
{
	int i,a[] = { 11,22,33,44,55,66 };
	int *p_a=a,gokei=0;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b=b,gokei1=0;
	for (i = 0; i < 5; i++)
	{
		gokei += *p_a;
		p_a++;
	}
	printf("�z��a�@���v=%d\t����=%.3f\n", gokei, (float)gokei / 6);
	for (i = 0; i < 4; i++)
	{
		gokei1 += *p_b;
		p_b++;
	}
	printf("�z��@���v=%,3f\t����=%,3f\n", gokei1, gokei1 / 4);
}
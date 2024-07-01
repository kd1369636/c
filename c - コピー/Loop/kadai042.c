#include<stdio.h>
main()
{
	int i ,gokei;
	i = 1;
	gokei = 0;
	while (gokei<= 300) {
		printf("%d+", i);
		gokei += i;
		i++;
		
	}
	printf("\b=%d", gokei);
}
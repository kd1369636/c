#include<stdio.h>
main()
{
	int i, c,cnt;
	for (i = 0; i <3; i++) {
		printf("\n");
		for (c = 0; c <20 ; c++) {
			cnt++;
			printf("%2d ", cnt);
		}
		printf("\n");
	}
}^
#include<stdio.h>
main()
{
	int gokei, i, j,a[2][3] = { {10,20,30},{1,2,3} };
	for (j = 0; j < 2; j++) {
		for (gokei = 0, i = 0; i <= 2; i++) {
			printf("a[%d][%d]=%d\n", j, i, a[j][i]);
			gokei = gokei + a[j][i];
		}
		printf("1s–Ú‚Ì‡Œv%d\n", gokei);
	}
}

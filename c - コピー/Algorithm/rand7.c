#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int k, p,i;
	srand(time(0));
	rand();
	k = rand() % 1000 + 1;
	printf("1から１０００の中で当たりの数を予想してください\n");
	do {
		printf("あたりの数は？ー＞");
		scanf("%d", &p);
		if (k > p) {
			printf("あたりの数より小さいです\n");
		}
		if (k < p) {
			printf("あたりの数より大きいです\n");
		}
		i++;
	} while (k != p);
		printf("正解！%d回目で当たりました", i);
	
	
	
}

	

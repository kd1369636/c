#include<stdio.h>
main()
{
	float e=0, box[3] ;
	int i;
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
		e += box[i];
	}
	printf("合計は%.2fです\n", e);
	printf("平均は%.2fです\n", e / 3.0);
}
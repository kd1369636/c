#include<stdio.h>
main()
{
	int a;
	printf("月を入力:\n");
	scanf("%d", &a);
	if (a ==4|| a==6 ||a==9||a== 11) {
		printf("最終日は３０日です\n");
	}
	else {
		if (a==2){
			printf("最終日は２８日です\n");
		}
		else {
			printf("最終日は３１日です\n");
		}
	

	}
}

#include<stdio.h>
main()
{
	int num, i;
	i = 0;
	printf("数を入れて:");
	scanf("%d", &num);
	while (10 >= i) {
		printf("%d+%d=%d\n",num,i,num+i);
		i++;
	}

}
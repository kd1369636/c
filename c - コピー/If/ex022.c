#include<stdio.h>
main()
{
	int a;
	printf("西暦を入力:");
	scanf("%d", &a);
		if (a < 1989) {
			printf("昭和生まれです");
		}
		else {
			printf("平成生まれです");
		}
}
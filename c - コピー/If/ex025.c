#include<stdio.h>
main()
{
	char a;
	printf("文字を入力:\n");
	scanf("%c", &a);
	if (a <= 'Z' && a >= 'A' || a >= 'a' && a < 'z') {
		printf("大文字です\n");
	}
	else {
		if (a >= '0' && a <= '9') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
}
#include<stdio.h>
main()
{
	char a;
	printf("���������:\n");
	scanf("%c", &a);
	if (a <= 'Z' && a >= 'A') {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}
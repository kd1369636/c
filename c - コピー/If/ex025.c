#include<stdio.h>
main()
{
	char a;
	printf("���������:\n");
	scanf("%c", &a);
	if (a <= 'Z' && a >= 'A' || a >= 'a' && a < 'z') {
		printf("�啶���ł�\n");
	}
	else {
		if (a >= '0' && a <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}
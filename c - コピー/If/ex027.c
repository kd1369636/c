#include<stdio.h>
main()
{
	char a;
	printf("���������:\n");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		printf("�ϊ������%c\n", a -0x20);
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("�ϊ������%c\n", a +0x20);
		}
		else {
			printf("���̓G���[\n");
		}
	}
}
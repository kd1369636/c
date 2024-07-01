#include<stdio.h>
main()
{
	char a;
	printf("•¶Žš‚ð“ü—Í:\n");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", a -0x20);
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", a +0x20);
		}
		else {
			printf("“ü—ÍƒGƒ‰[\n");
		}
	}
}
#include<stdio.h>
main()
{
	char a;
	printf("•¶Žš‚ð“ü—Í:\n");
	scanf("%c", &a);
	if (a <= 'Z' && a >= 'A' || a >= 'a' && a < 'z') {
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else {
		if (a >= '0' && a <= '9') {
			printf("”Žš‚Å‚·\n");
		}
		else {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
		}
	}
}
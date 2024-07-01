#include<stdio.h>
main()
{
	int a, b, c;
	printf("‰‰Zq‚ğ“ü—Í:\n");
	scanf("%d", &a);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í\n");
	scanf("%d,%d", &b, &c);
	if (a == 1) {
		printf("%d\n", c + b);
	}
	else {
		if (a == 2) {
			printf("%d\n", c - b);
		}
		else {
			if (a == 3) {
				printf("%d\n", c * b);
			}
			else {
				if (a == 4) {
					printf("%d\n", c / b);
				}
			}
		}
		}
	}

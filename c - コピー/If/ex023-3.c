#include<stdio.h>
main()
{
	int a, b, c;
	printf("���Z�q�����:\n");
	scanf("%d", &a);
	printf("�Q�̐��������\n");
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

#include<stdio.h>
void shisoku(int c, int y, int* wa, int* sa, int* sk, int* syo ,int* ama);
main()
{
	int a, b, c, d, e, f,g;
	printf("���l�H:");
	scanf("%d", &a);
	printf("���l�H:");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f ,&g);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("wa=%d sa=%d seki=%d syou=%d ama=%d\n", c, d, e, f,g);
	
}
void shisoku(int c, int y, int* wa, int* sa, int* sk, int* syo ,int *ama)
{
	*wa = c + y;
	*sa = c - y;
	*sk = c * y;
	*syo = c / y;
	*ama = c % y;
}
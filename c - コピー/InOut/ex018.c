#include<stdio.h>
main()
{
	int  a, b, c,d;

	printf("������3����:");
	scanf("%d,%d,%d" ,& a ,& b ,& c);
	d = a + b + c;
	printf("���v=%d" ,d);
	//printf("����=%.2f" ,d / 3.0);
	printf("����=%.2f",(float) d / 3);
}
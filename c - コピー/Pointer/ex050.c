#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;
	p_a = &a;
	b = *p_a;
	printf("&a = % d  *p_a=%d p_a=%d &p_a=%d\n", &a, *p_a,p_a,&p_a);
}
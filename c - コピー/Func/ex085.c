#include<stdio.h>
char Str_Cat(char* s1, char* s2);
main()
{
	char a[] = { "game" }, b[] = { "soft" };
	printf("配列a:%s\n配列b:%s\n", a, b);
	Str_Cat(a, b);
	printf("配列a：%s", *a);
}
char Str_Cat(char *s1, char *s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0, i = 0; *(s1 + i) = *(s2 + j); i++, j++);
	return ;
}


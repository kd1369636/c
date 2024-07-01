#include<stdio.h>
main()
{
	char d[10];
	int i, e;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i]--;
	}
	printf("•œŒ³Ï‚İ•¶š—ñ‚Í%s", &d[0]);
}
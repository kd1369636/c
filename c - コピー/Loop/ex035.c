#include<stdio.h>
main()
{
	int k ,su;
	k = 0;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
		if (su == -999)break;
		k += su;
	}
	printf("‡Œv%d", k);
}
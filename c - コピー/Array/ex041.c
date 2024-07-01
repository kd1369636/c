#include<stdio.h>
main()
{
	float e=0, box[3] ;
	int i;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
		e += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", e);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", e / 3.0);
}
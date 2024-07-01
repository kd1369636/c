#include<stdio.h>
main()
{
	int i, e, d[11] = { 10,5,30,77,16,3,47,29,37,33,};
	printf("’Tõ’nS‚ğ“ü—Í\n");
	scanf("%d", &e);
	d[11] = e;
	for (i = 0; e != d[i]; i++);
	if (i == 11)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("’Tõ’n%d‚ğAd%d‚Å”­Œ©\n",e,i);
	}

}
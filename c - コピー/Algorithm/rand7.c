#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int k, p,i;
	srand(time(0));
	rand();
	k = rand() % 1000 + 1;
	printf("1‚©‚ç‚P‚O‚O‚O‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do {
		printf("‚ ‚½‚è‚Ì”‚ÍH[„");
		scanf("%d", &p);
		if (k > p) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (k < p) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		i++;
	} while (k != p);
		printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½", i);
	
	
	
}

	

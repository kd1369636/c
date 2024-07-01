//#include <stdio.h>
//main()
//{
//	char* p_ride[3] = { "car", "bus", "shinkansen" };
//	int i=0;
//	while(i<3)
//	{
//		while (*p_ride[i])
//		{
//			putchar(*p_ride[i]++);
//		}
//		printf("\n");		
//		i++;
//	}	
//}
#include <stdio.h>
main()
{
	char* p_ride[3] = { "car", "bus", "shinkansen" }, * p;
	int i;
	for (i = 0; i < 3; i++) {
		p = p_ride[i];
		while (*p) {
			putchar(*p++);
		}
		putchar('\n');
	}
}
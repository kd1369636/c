#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int k, p,i;
	srand(time(0));
	rand();
	k = rand() % 1000 + 1;
	printf("1����P�O�O�O�̒��œ�����̐���\�z���Ă�������\n");
	do {
		printf("������̐��́H�[��");
		scanf("%d", &p);
		if (k > p) {
			printf("������̐���菬�����ł�\n");
		}
		if (k < p) {
			printf("������̐����傫���ł�\n");
		}
		i++;
	} while (k != p);
		printf("�����I%d��ڂœ�����܂���", i);
	
	
	
}

	

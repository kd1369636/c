#include<stdio.h>
main()
{
	float e=0, box[3] ;
	int i;
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
		e += box[i];
	}
	printf("���v��%.2f�ł�\n", e);
	printf("���ς�%.2f�ł�\n", e / 3.0);
}
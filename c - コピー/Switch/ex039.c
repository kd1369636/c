#include<stdio.h>
main()
{
	int i,e;
	char s;
	printf("��������́F");
	scanf("%c", &s);
	printf("��������́F");
	scanf("%d %d", &i,&e);
	switch (s)
	{
	case 'd':
		if (i > e)
		{
			printf("�ő�l��%d�ł�\n",i);
		}
		else
		{
			printf("�ő�l��%d�ł�\n",e);
		}
		break;
	case 's':
		if (i > e)
		{
			printf("�ŏ��l��%d�ł�\n", e);
		}
		else
		{
			printf("�ŏ��l��%d�ł�\n", i);
		}
		break;
	case 'g':
		printf("���v��%d�ł�\n", i + e);
		break;
	case 'h':
		printf("���ς�%.2f�ł�\n",  (i+e)/2.0);
		break;
		
	
	}
}
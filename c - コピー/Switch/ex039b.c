#include<stdio.h>
main()
{
	int i,e,c,d;
	char s;
	printf("��������́F");
	scanf("%c", &s);
	printf("��������́F");
	scanf("%d %d %d", &i,&e ,&c);
	switch (s)
	{
	case 'd':
		s
		{
			
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
		printf("���v��%d�ł�\n", i + e+c);
		break;
	case 'h':
		printf("���ς�%.2f�ł�\n",  (i+e+c)/3.0);
		break;
		
	
	}
}
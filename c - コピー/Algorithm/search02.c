#include<stdio.h>
main()
{
	int i, e, d[11] = { 10,5,30,77,16,3,47,29,37,33,};
	printf("�T���nS�����\n");
	scanf("%d", &e);
	d[11] = e;
	for (i = 0; e != d[i]; i++);
	if (i == 11)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�T���n%d���Ad%d�Ŕ���\n",e,i);
	}

}
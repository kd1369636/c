#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { { "�G���s�c", 30, 5},
	{ "�P�V�S��", 50, 2},
	{ "�t�f�o�R", 500, 3} };
	struct syohin_data *p;
	p = syohin;
	int i,kingaku;
	for (i = 0; i < 3; i++) {
		kingaku = p->tanka * p->kosuu;
		printf("���i��:%s\t", syohin[i].name);
		printf("�P ��:%4d\t", syohin[i].tanka);
		printf("�� ��:%4d\t", syohin[i].kosuu);
		printf("���v�F%d\n", kingaku);
	}
}
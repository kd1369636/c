#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { { "エンピツ", 30, 5},
	{ "ケシゴム", 50, 2},
	{ "フデバコ", 500, 3} };
	struct syohin_data *p;
	p = syohin;
	int i,kingaku;
	for (i = 0; i < 3; i++) {
		kingaku = p->tanka * p->kosuu;
		printf("商品名:%s\t", syohin[i].name);
		printf("単 価:%4d\t", syohin[i].tanka);
		printf("個 数:%4d\t", syohin[i].kosuu);
		printf("合計：%d\n", kingaku);
	}
}
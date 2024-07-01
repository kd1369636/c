#include<stdio.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile student[5] = {
		{"a-sa-",{2000,1,1},"A"},
		{"a-sa-",{2000,1,1},"A"},
		{"a-sa-",{2000,1,1},"A"},
		{"a-sa-",{2000,1,1},"A"},
		{"a-sa-",{2000,1,1},"A"},
	};
	struct profile* p;
	int i;
	p = student;
	for (i = 0; i < 5; i++)
	{
		if(p->day.tuki == 2 )
		{
			printf("%s-- %d ”N %02d ŒŽ %02d “ú¶ ŒŒ‰tŒ^-%sŒ^\n",
				p->name, p->day.nen, p->nen,.tuki, p->day.hi, p->blood);
		}
	}
}
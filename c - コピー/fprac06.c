#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5
typedef struct
{
	int m_map[H][W];
}Map;
typedef struct
{
	int x, y;
}Pos;


void SetMap(char* filename, Map* m);
void DrawMap(Map *m,Pos *p);
main()
{
	Map MapData;
	Pos CharaPos = { 1.1 };
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select=0;
	if (select >= 0 && select <= 2) {
		SetMap(MapFileName[select], &MapData);
		MapData.m_map[CharaPos.y][CharaPos.x] = 2;
		while (1)
		{
			system("cls");
			DrawMap(MapData);
			CharaMove(&MapData, &CharaPos);
		}
	}
}
CharaMove(Map*m,Pos*p)
{
	char ch;
	ch = getch();
	switch (ch)
	{
	case'd':
		if(m->m_map[p->y][()])
		m->m_map[p->y][p->x] = 0;
		m->m_map[p->y][(p->x) + 1] = 2;
		p->x += 1;
		break;
	case'a':
		m->m_map[p->y][p->x] = 0;
		m->m_map[p->y][(p->x) + 1] = 2;
		p->x -= 1;
		break;
	case'w':
		m->m_map[p->y][p->x] = 0;
		m->m_map[p->y][(p->x) + 1] = 2;
		p->y += 1;
		break;
	case's':
		m->m_map[p->y][p->x] = 0;
		m->m_map[p->y][(p->x) + 1] = 2;
		p->y += 1;
		break;
	}
}
void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}
	void DrawMap(Map m)
	{
		int i, j;
		for (i = 0; i < H; i++)
		{
			for (j=0;j<W;j++)
			{
				switch (m.m_map[i][j]) {
				case 0:
					//�O�̂Ƃ��͋󔒕\��
					printf(" ");
					break;
				case 1:
					//�P�̂Ƃ��́���\��
					printf("��");
					break;
				case 2:
					//�Q�̂Ƃ���@��\��
					printf("@");
					break;
				case 3:
					printf("$");
					break;
				}
			}
		}
			printf("\n");
	}
	

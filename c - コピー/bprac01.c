#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3

typedef unsigned int UINT;

typedef struct
{
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;
typedef struct
{
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Spec;
typedef struct
{
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_Num];
}Chara;
typedef struct
{
	Spec sp;
	int rate;
}Mob;
enum BitState
{
	Base=0, //�O�O�O�O�O�O�O�O�ʏ���
	Poison=1,//�O�O�O�O�O�O�O�P�ŏ��
	Sleep=1<<1,//�O�O�O�O�O�O�P�O������
	Paralysis=1<<2,//�O�O�O�O�O�P�O�O�}�q���
	Burn=1<<3,//�O�O�O�O�P�O�O�O�₯�Ǐ��
	AtkUp=1<<4,//�O�O�O�P�O�O�O�O�U���̓A�b�v���
	AtkDown=1<<5//�O�O�P�O�O�O�O�O�U���̓_�E�����
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	//MyState |= (Poison | Sleep);
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("���������݂̏�ԁ�����\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("�˂ނ�\n");
	}
	if (s & Paralysis)
	{
		printf("�}�q\n");
	}
	if (s & Burn)
	{
		printf("�₯��\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("�ʏ���\n");
	}
	printf("*****************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�₯�� 5:�U���� 6:�U���� 0:�I����");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default: //�P�`�U�ɍ��v���Ȃ������Ƃ��̏���
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂���\n");
		printf("1:�� 2:���� 3:��� 4:�₯�� 5:�U���� 6:�U���� 0:�I����");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}
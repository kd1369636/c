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
	Base=0, //‚O‚O‚O‚O‚O‚O‚O‚O’Êíó‘Ô
	Poison=1,//‚O‚O‚O‚O‚O‚O‚O‚P“Åó‘Ô
	Sleep=1<<1,//‚O‚O‚O‚O‚O‚O‚P‚O–°‚èó‘Ô
	Paralysis=1<<2,//‚O‚O‚O‚O‚O‚P‚O‚Oƒ}ƒqó‘Ô
	Burn=1<<3,//‚O‚O‚O‚O‚P‚O‚O‚O‚â‚¯‚Çó‘Ô
	AtkUp=1<<4,//‚O‚O‚O‚P‚O‚O‚O‚OUŒ‚—ÍƒAƒbƒvó‘Ô
	AtkDown=1<<5//‚O‚O‚P‚O‚O‚O‚O‚OUŒ‚—Íƒ_ƒEƒ“ó‘Ô
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
	printf("–––Œ»İ‚Ìó‘Ô–––\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("‚Ë‚Ş‚è\n");
	}
	if (s & Paralysis)
	{
		printf("ƒ}ƒq\n");
	}
	if (s & Burn)
	{
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base)
	{
		printf("’Êíó‘Ô\n");
	}
	printf("*****************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‚â‚¯‚Ç 5:UŒ‚ª 6:UŒ‚« 0:I—¹„");
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
		default: //‚P`‚U‚É‡’v‚µ‚È‚©‚Á‚½‚Æ‚«‚Ìˆ—
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‚â‚¯‚Ç 5:UŒ‚ª 6:UŒ‚« 0:I—¹„");
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
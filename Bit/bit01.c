#include<stdio.h>

enum Bitstate
{
	Base	  = 0,			// 0000 0000 ’Êíó‘Ô
	Poison	  = 1 << 0,		// 0000 0001 ‚Ç‚­ó‘Ô
	Sleep	  = 1 << 1,		// 0000 0010 –°‚èó‘Ô
	Paralysis = 1 << 2,		// 0000 0100 ‚Ü‚Ğó‘Ô
	Burn	  = 1 << 3,		// 0000 1000 ‰Îó‘Ô
	AtkUp	  = 1 << 4,		// 0001 0000 UŒ‚—ÍƒAƒbƒvó‘Ô
	AtkDown	  = 1 << 5		// 0010 0000 UŒ‚—Íƒ_ƒEƒ“ó‘Ô
};

typedef unsigned int UNIT;

void DisplayStatus(UNIT s);
void ChangeFlg(UNIT* s);
void ClearFlag(UNIT* s);

main()
{
	UNIT MyState = Base;

	ChangeFlg(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UNIT s)
{
	printf("\n***** Œ»İ‚Ìó‘Ô *****\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("–°‚è\n");
	}
	if (s & Paralysis)
	{
		printf("‚Ü‚Ğ\n");
	}
	if (s & Burn)
	{
		printf("‰Î\n");
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
	printf("**********************\n");
}

void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("\n‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("‚PF“Å\n‚QF‡–°\n‚RF–ƒáƒ\n‚SF‰Î\n‚TFUŒ‚ª\n‚UFUŒ‚«\n‚OFI—¹\n");
		printf("\n‚³‚ A‚Ç‚¤‚·‚é => ");
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
		}
	}
}

void ClearFlag(UNIT* s)
{
	int a;
	while (1)
	{
		printf("\n‚Ç‚Ìó‘Ô‚ğ¡‚µ‚Ü‚·‚©H\n");
		printf("‚PF“Å\n‚QF‡–°\n‚RF–ƒáƒ\n‚SF‰Î\n‚TFUŒ‚ª\n‚UFUŒ‚«\n‚VF‘S‰ğœ\n‚OFI—¹\n");
		printf("\n‚³‚ A‚Ç‚¤‚·‚é =>");
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
		case 7:
			*s = Base;
			break;
		}
	}
}
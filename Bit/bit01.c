#include<stdio.h>

enum Bitstate
{
	Base	  = 0,			// 0000 0000 通常状態
	Poison	  = 1 << 0,		// 0000 0001 どく状態
	Sleep	  = 1 << 1,		// 0000 0010 眠り状態
	Paralysis = 1 << 2,		// 0000 0100 まひ状態
	Burn	  = 1 << 3,		// 0000 1000 火傷状態
	AtkUp	  = 1 << 4,		// 0001 0000 攻撃力アップ状態
	AtkDown	  = 1 << 5		// 0010 0000 攻撃力ダウン状態
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
	printf("\n***** 現在の状態 *****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("まひ\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("通常状態\n");
	}
	printf("**********************\n");
}

void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("\nどの状態にしますか？\n");
		printf("１：毒\n２：睡眠\n３：麻痺\n４：火傷\n５：攻撃↑\n６：攻撃↓\n０：終了\n");
		printf("\nさあ、どうする => ");
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
		printf("\nどの状態を治しますか？\n");
		printf("１：毒\n２：睡眠\n３：麻痺\n４：火傷\n５：攻撃↑\n６：攻撃↓\n７：全解除\n０：終了\n");
		printf("\nさあ、どうする =>");
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
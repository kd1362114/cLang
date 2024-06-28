#include<stdio.h>
#include<stdio.h>
#include<time.h>

main()
{
	// プレイヤーのハンドを入力、表示
	int playerHand;
	printf("１：グー\n２：チョキ\n３：パー\n");
	printf("手を構えて → ");
	scanf("%d", &playerHand);
	printf("\n");

	if (playerHand == 1)
	{
		printf("自分：グー\n");
	}
	else if (playerHand == 2)
	{
		printf("自分：チョキ\n");
	}
	else if (playerHand == 3)
	{
		printf("自分：パー\n");
	}
	else
	{
		printf("おまえ... 限界を超える気かッ!!!\n");
	}

	// CPのハンドを決定、表示
	int cpHand;
	if (playerHand >= 1 && playerHand <= 3)
	{
		srand(time(0));
		cpHand = rand() % 3 + 1;

		if (cpHand == 1)
		{
			printf("相手：グー\n");
		}
		else if (cpHand == 2)
		{
			printf("相手：チョキ\n");
		}
		else if (cpHand == 3)
		{
			printf("相手：パー\n");
		}
	}
	else
	{
		cpHand = 0;
	}

	// 勝敗判定
	printf("\n");
	if (playerHand == cpHand)
	{
		printf("あいこ\n");
	}
	if ((playerHand == 1 && cpHand == 2) || (playerHand == 2 && cpHand == 3) || (playerHand == 3 && cpHand == 1) || cpHand == 0)
	{
		printf("勝利ッ!!!\n");
	}
	if ((playerHand == 1 && cpHand == 3) || (playerHand == 2 && cpHand == 1) || (playerHand == 3 && cpHand == 2))
	{
		printf("敗北ッ!!!\n");
	}
}
#include<stdio.h>

main()
{
	int score = 0, max_score;
	char ch, name[20], max_name[20];
	FILE* fp;

	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else
	{
		printf("ファイルが読み取れません\n");
		return;
	}

	printf("最高得点　名前：%s　スコア：%d\n\n", max_name, max_score);
	printf("名前：");
	scanf("%s", name);

	while (1)
	{
		printf("現在のスコア：%d\n", score);
		ch = getch();

		if (ch == 'e')
		{
			break;
		}

		score++;
	}

	if (score > max_score)
	{
		printf("スコア更新!!!\n");
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
		}
		else
		{
			printf("ファイルが読み取れません\n");
			return;
		}
	}
}
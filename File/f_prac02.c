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
		printf("�t�@�C�����ǂݎ��܂���\n");
		return;
	}

	printf("�ō����_�@���O�F%s�@�X�R�A�F%d\n\n", max_name, max_score);
	printf("���O�F");
	scanf("%s", name);

	while (1)
	{
		printf("���݂̃X�R�A�F%d\n", score);
		ch = getch();

		if (ch == 'e')
		{
			break;
		}

		score++;
	}

	if (score > max_score)
	{
		printf("�X�R�A�X�V!!!\n");
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
		}
		else
		{
			printf("�t�@�C�����ǂݎ��܂���\n");
			return;
		}
	}
}
#include<stdio.h>
#include<string.h>

#define CNT 4

main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* keep;

	for (int i = 0; i < CNT - 1; i++)
	{
		for (int j = i + 1; j < CNT; j++)
		{

			printf("%d\n", strcmp(p_tbl[i], p_tbl[j]));
			if (strcmp(p_tbl[i], p_tbl[j]) > 0)
			{
				keep = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = keep;
			}
		}
	}
	for (int i = 0; i < CNT; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}
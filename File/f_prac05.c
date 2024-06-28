#include<stdio.h>

#define MAP_NUM 3
#define W 10
#define H 5

typedef struct
{
	int m_map[H][W];
}Map;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);

main()
{
	Map MapData;
	char* MapFileName[MAP_NUM] = { "map0.txt","map1.txt","map2.txt" };
	int select;

	printf("マップを選択：");
	scanf("%d", &select);
	
	if (select >= 0 && select < MAP_NUM)
	{
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
	else
	{
		printf("存在しないマップです\n");
	}
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;

	if (fp = fopen(filename, "r"))
	{
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
	}
}

void DrawMap(Map m)
{
	for (int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
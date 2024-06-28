#include<stdio.h>

typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct
{
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier s);

main()
{
	Soldier sol;

	SetInfo(&sol, "file03.txt");
	Display(sol);
}

// ファイルのデータを読み込む
void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;

	if (fp = fopen(filename, "r"))
	{
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
	}
	fclose(fp);
}

// 表示
void Display(Soldier s)
{
	printf("名前：%s\t体力：%d\n\n", s.name, s.hp);
	printf("装備：%s\t弾数：%d\n\t\t\t威力：%.1f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}
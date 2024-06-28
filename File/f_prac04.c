#include<stdio.h>

#define SOL_NUM 3

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
void Display(Soldier* s);

main()
{
	Soldier sols[SOL_NUM];

	SetInfo(sols, "file04.txt");
	Display(sols);
}

// �t�@�C���̃f�[�^��ǂݍ���
void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;

	if (fp = fopen(filename, "r"))
	{
		for (int i = 0; i < SOL_NUM; i++)
		{
			fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
			s++;
		}
	}
	fclose(fp);
}

// �\��
void Display(Soldier* s)
{
	printf("������������������������������������������������������������������������\n\n");
	for (int i = 0; i < SOL_NUM; i++)
	{
		printf("���O�F%s\t�̗́F%d\n\n", s->name, s->hp);
		printf("�����F%s\t�e���F%d\n\t\t\t�З́F%.1f\n\n", s->wpn.Wname, s->wpn.bullet, s->wpn.atk);
		printf("������������������������������������������������������������������������\n\n");
		s++;
	}
}
#include<stdio.h>
#include<string.h>

#define NUM 5

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile people[NUM];
	struct profile* p = people;

	for (int i = 0; i < NUM; i++, p++)
	{
		printf("%d�l��\t�@�@���O�F", i + 1);
		scanf("%s", &p->name);
		printf("\t���N�����F");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("\t�@���t�^�F");
		scanf("%s", &p->blood);
		printf("\n");
	}

	p = people;
	printf("-----------------------------\n\n");
	for (int i = 0; i < NUM; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%d�l��\t�@�@���O�F%s\n", i + 1, p->name);
			printf("\t���N�����F%d\n", p->birth[0], p->birth[1], p->birth[2]);
			printf("\t�@���t�^�F%s\n", p->blood);
			printf("\n");
		}
	}
}

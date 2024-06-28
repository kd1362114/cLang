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
		printf("%d人目\t　　名前：", i + 1);
		scanf("%s", &p->name);
		printf("\t生年月日：");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("\t　血液型：");
		scanf("%s", &p->blood);
		printf("\n");
	}

	p = people;
	printf("-----------------------------\n\n");
	for (int i = 0; i < NUM; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%d人目\t　　名前：%s\n", i + 1, p->name);
			printf("\t生年月日：%d\n", p->birth[0], p->birth[1], p->birth[2]);
			printf("\t　血液型：%s\n", p->blood);
			printf("\n");
		}
	}
}

#include<stdio.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data1;

	printf("　　名前：");
	scanf("%s", data1.name);
	printf("生年月日：");
	scanf("%d%d%d", &data1.birth[0], &data1.birth[1], &data1.birth[2]);
	printf("　血液型：");
	scanf("%s", data1.blood);

	printf("%s　%s\n", data1.name, data1.blood);
	printf("%d年 %d月 %d日\n", data1.birth[0], data1.birth[1], data1.birth[2]);
}
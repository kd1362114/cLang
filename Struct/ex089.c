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

	printf("�@�@���O�F");
	scanf("%s", data1.name);
	printf("���N�����F");
	scanf("%d%d%d", &data1.birth[0], &data1.birth[1], &data1.birth[2]);
	printf("�@���t�^�F");
	scanf("%s", data1.blood);

	printf("%s�@%s\n", data1.name, data1.blood);
	printf("%d�N %d�� %d��\n", data1.birth[0], data1.birth[1], data1.birth[2]);
}
#include<stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
	int kosu;
};

main()
{
	struct syohin_data syohin[3] =
	{
		{"�G���s�c",30,5},
		{"�P�V�S��",50,2},
		{"�t�f�o�R",500,3}
	};
	
	for (int i = 0; i < 3; i++)
	{
		printf("���i���F%s\n", syohin[i].name);
		printf("�P�@���F%3d\n", syohin[i].tanka);
		printf("�@���F%3d\n", syohin[i].kosu);
		printf("\n\n");
	}
}
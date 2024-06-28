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
		{"エンピツ",30,5},
		{"ケシゴム",50,2},
		{"フデバコ",500,3}
	};
	
	for (int i = 0; i < 3; i++)
	{
		printf("商品名：%s\n", syohin[i].name);
		printf("単　価：%3d\n", syohin[i].tanka);
		printf("個　数：%3d\n", syohin[i].kosu);
		printf("\n\n");
	}
}
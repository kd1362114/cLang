#include<stdio.h>

struct fruit
{
	char name[30];
	int price;
	int point;
	int num;
	int total;
};

main()
{
	struct fruit fruit_data[] =
	{
		{"も　も",300,5,3,0}
	};

	struct fruit* p = fruit_data;

	printf("商　品　名：%s\n", p->name);
	printf("価　　　格：%d\n", p->price);
	printf("おすすめ度：");
	for (int i = 0; i < p->point; i++)
	{
		printf("★ ");
	}
	printf("\n");
	printf("個　　　数：%d\n", p->num);
	printf("金　　　額：%d\n", p->price * p->num);
}
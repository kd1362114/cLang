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
		{"���@��",300,5,3,0}
	};

	struct fruit* p = fruit_data;

	printf("���@�i�@���F%s\n", p->name);
	printf("���@�@�@�i�F%d\n", p->price);
	printf("�������ߓx�F");
	for (int i = 0; i < p->point; i++)
	{
		printf("�� ");
	}
	printf("\n");
	printf("�@�@�@���F%d\n", p->num);
	printf("���@�@�@�z�F%d\n", p->price * p->num);
}
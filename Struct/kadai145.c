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
		{"���@��",300,5,3,0},
		{"�Ԃǂ�",200,4,10,0},
		{"������",1500,5,8,0}
	};

	struct fruit* p = fruit_data;

	int sum = 0;
	for (int i = 0; i < 3; i++, p++)
	{
		printf("���@�i�@���F%s\n", p->name);
		printf("���@�@�@�i�F%d\n", p->price);
		printf("�������ߓx�F");
		for (int i = 0; i < p->point; i++)
		{
			printf("�� ");
		}
		printf("\n");
		printf("�@�@�@���F%d\n", p->num);
		printf("���@�@�@�z�F%d\n\n\n", p->price * p->num);
		sum += p->price * p->num;
	}
	printf("���v���z�F%d\n", sum);
}
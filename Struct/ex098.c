#include<stdio.h>

#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken ken_data[] =
	{
		{1,"�k�C��",NULL},
		{2,"�X��",NULL},
		{3,"��茧",NULL},
		{4,"�{�錧",NULL},
		{5,"�H�c��",NULL},
		{6,"�R�`��",NULL},
		{7,"������",NULL},
		{28,"���Ɍ�",NULL},
		{DATA_END,"",NULL}
	};

	struct ken* p, * wp;

	// �����N�̐ݒ�
	p = wp = ken_data;
	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	p = ken_data;
	p->next = p + 7;
	(p + 7)->next = p + 1;
	(p + 6)->next = p + 8;

	// �����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("%d\t%s\n", p->code, p->name);
	}
}
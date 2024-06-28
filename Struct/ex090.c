#include<stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
};

main()
{
	struct syohin_data syohin;
	struct syohin_data* p;

	p = &syohin;

	printf("¤•i–¼F");
	scanf("%s", p->name);

	p->tanka = 30;

	printf("p->name\t\t= %s\n", p->name);
	printf("p->tanka\t= %d\n", p->tanka);
	printf("syohin.name\t= %s\n", syohin.name);
	printf("syohin.tanka\t= %d\n", syohin.tanka);
}
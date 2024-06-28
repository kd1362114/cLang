#include<stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
};

void display1(int);
void display2(struct syohin_data);

main()
{
	int a = 10;
	struct syohin_data syohin = { "ÉPÉVÉSÉÄ",50 };

	display1(a);
	display2(syohin);
}

void display1(int a)
{
	printf("a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name  = %s\n", syohin.name);
	printf("syohin.tanka = %d\n", syohin.tanka);
}
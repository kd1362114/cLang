#include<stdio.h>

void display1(int n);
void display2(int* n2);

main()
{
	int a, b;

	printf("®”‚PF");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);

	printf("®”‚QF");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d\n\n", b);
}

void display1(int n)
{
	printf("®”‚P = %d\n",n);
	n += 10;
	return;
}

void display2(int* n2)
{

	printf("®”‚P = %d\n", *n2);
	*n2 += 10;
	return;
}
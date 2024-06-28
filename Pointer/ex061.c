#include<stdio.h>
main()
{
	char data[10] = "Orange";
	char* p_data;
	char* p;
	p = "Apple";
	p_data = data;

	printf("data[]\t= ");
	while (*p_data)
	{
		putchar(*p_data++);
	}
	printf("\n");

	printf("*p\t= ");
	while (*p)
	{
		putchar(*p++);
	}
	putchar('\n');
}
#include<stdio.h>

main()
{
	int w[] = { 4,1,0,2,3 };
	int* p;

	p = w;
	printf("%d\n", *(p + 3));
}
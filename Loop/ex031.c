#include<stdio.h>
main()
{
	int sum = 0;

	for (int n = 1; n <= 10; n++)
	{
		printf("1から%dまでの和\t= %d\n", n, sum = sum + n);
	}
}
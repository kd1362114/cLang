#include<stdio.h>
main()
{
	int a[5] = { 10,20,30,40,50 };

	for (int n = 0; n < 5; n++)
	{
		printf("a[%d] = %d\n", n, a[n]);
	}
}
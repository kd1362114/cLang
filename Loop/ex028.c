#include<stdio.h>
main()
{
	int ia = 0, goukei = 0;

	while (ia != -999)
	{
		goukei += ia;
		printf("���l����́F");
		scanf("%d", &ia);
	}
	printf("���v = %d\n", goukei);
}
#include<stdio.h>
main()
{
	int sey;

	printf("�������́F");
	scanf("%d", &sey);

	if (sey % 4 == 0 && (sey % 100 != 0 || sey % 400 == 0))
	{
		printf("���邤�N�ł�\n");
	}
	else
	{
		printf("���邤�N�ł͂���܂���\n");
	}
}
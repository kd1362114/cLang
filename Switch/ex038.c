#include<stdio.h>
main()
{
	int a;
	
	printf("���l����́F");
	scanf("%d", &a);

	switch (a / 10)
	{
	case 1:
		printf("10�_��\n");
		break;
	case 2:
		printf("20�_��\n");
		break;
	case 3:
		printf("30�_��\n");
		break;
	case 4:
		printf("40�_��\n");
		break;
	default:
		printf("�K��O�̐��l�ł�\n");
		break;
	}
}
#include<stdio.h>
main()
{
	int a, sum = 0, i = 0;
	//a = 0;

	printf("�����F");
	while (scanf("%d", &a) != EOF)
	{
		sum += a;
		i++;
		printf("�����F");
	}

	//for (i = 0; a != EOF; i++)
	//{
	//	printf("�����F");
	//	scanf("%d", &a);
	//	sum += a;
	//}

	printf("���v�F%d\t���ρF%.2f\n", sum, (float)sum / i);
}
#include<stdio.h>
main()
{
	int a, h, m, s;

	printf("�b������́F");
	scanf("%d", &a);

	if (a > 5000)
	{
		printf("�K��O�̐��l�ł� (5000�܂�)\n");
	}
	else
	{
		h = a / 3600;
		m = a % 3600 / 60;
		s = a % 3600 % 60;

		printf("%d����%d��%d�b�ł�\n", h, m, s);
	}
}
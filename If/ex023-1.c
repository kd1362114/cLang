#include<stdio.h>
main()
{
	int a, h, m, s;

	printf("�b������́F");
	scanf("%d", &a);

	if (a <= 5000 && a >= 0)
	{
		h = a / 3600;
		m = a % 3600 / 60;
		s = a % 3600 % 60;

		printf("%d����%d��%d�b�ł�\n", h, m, s);
	}
	else if (a < 0)
	{
		printf("�K��O�̐��l�ł� (�}�C�i�X��Ή�)\n");
	}
	else
	{
		printf("�K��O�̐��l�ł� (5000�܂�)\n");
	}
}
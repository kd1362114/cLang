#include<stdio.h>
main()
{
	char flg;
	int a, b, c;
	int max = 0, min = 0;

	//�����A�l�̓���
	printf("��������́F");
	scanf("%c", &flg);
	printf("��������́F");
	scanf("%d%d%d",&a,&b,&c);

	//�啶�����������ɕϊ�
	if (flg >= 65 && flg <= 90)
	{
		flg += 32;
	}

	//����
	switch (flg)
	{
	case 'd':
		if (a > b)
		{
			max = a;
		}
		else
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		printf("�ő�l = %d\n", max);
		break;
	case 's':
		if (a < b)
		{
			min = a;
		}
		else
		{
			min = b;
		}
		if (c < max)
		{
			min = c;
		}
		printf("�ŏ��l = %d\n", min);
		break;
	case 'g':
		printf("���v = %d\n", a + b + c);
		break;
	case 'h':
		printf("���� = %.2f\n", (a + b + c) / (float)3);
		break;
	default:
		printf("�K��O�̐��l�ł�\n");
	}
}
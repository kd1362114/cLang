#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int sum);

main()
{
	int a, b, c, sum = 0;
	float ave = 0;

	printf("�������R���́F");
	scanf("%d%d%d", &a, &b, &c);

	printf("���v = %d\t���� = %.2f\n", sum = gokei(a, b, c), heikin(sum));
}

// ���v
int gokei(int a, int b, int c)
{
	return(a + b + c);
}

// ����
float heikin(int sum)
{
	return((float)sum / 3);
}
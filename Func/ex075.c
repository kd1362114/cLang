#include<stdio.h>

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sy);

main()
{
	int a, b, c, d, e, f;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);

	shisoku(a, b, &c, &d, &e, &f);

	puts("�����Ɛ����̎l�����Z");
	printf("�a = %d\n�� = %d\n", c, d);
	printf("�� = %d\ne�� = %d\n", e, f);
}

// �l�����Z
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sy)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*sy = x / y;
	return;
}
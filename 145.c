#include<stdio.h>
main()
{
	int a, b, keep;
	a = 5;
	b = 3;

	// ����ւ�����
	keep = a;
	a = b;
	b = keep;

	printf("a = %d\nb = %d\n", a, b);
}
#include<stdio.h>
main()
{
	float a, b, c;

	printf("�����P����́F");
	scanf("%f", &a);
	printf("�����Q����́F");
	scanf("%f", &b);
	printf("�����R����́F");
	scanf("%f", &c);

	printf("���v�F%1.3f\t���ρF%1.3f", a + b + c, (a + b + c) / 3);
}
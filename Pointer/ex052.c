#include<stdio.h>
main()
{
	int a, b, keep;
	int* p_a, * p_b;

	a = 100;
	b = 200;

	p_a = &a;			// a �̃A�h���X�� p_a �ɓ���
	p_b = &b;			// b �̃A�h���X�� p_b �ɓ���

	printf("���s�O�Fa = %d\tb = %d\n", a, b);

	keep = *p_a;
	*p_a = *p_b;
	*p_b = keep;

	printf("���s��Fa = %d\tb = %d\n", a, b);
}
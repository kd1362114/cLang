#include<stdio.h>
main()
{
	int a, b;
	int* p_a, * p_b, * keep;

	a = 100;
	b = 200;

	p_a = &a;			// a �̃A�h���X�� p_a �ɓ���
	p_b = &b;			// b �̃A�h���X�� p_b �ɓ���

	printf("���s�O�F*p_a = %d\t*p_b = %d\n", *p_a, *p_b);

	keep = p_a;
	p_a = p_b;
	p_b = keep;

	printf("���s��F*p_a = %d\t*p_b = %d\n", *p_a, *p_b);
}
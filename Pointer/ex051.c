#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;

	a = 50;
	b = 10;

	p_a = &a;			// a �̃A�h���X�� p_a �ɓ���
	p_b = &b;			// b �̃A�h���X�� p_b �ɓ���

	c = *p_a + *p_b;	// p_a �� p_b �ɓ��͂��ꂽ�A�h���X��̒l���Q��

	printf("%d + %d = %d\n", a, b, c);
}
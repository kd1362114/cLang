#include<stdio.h>
main()
{
	int a = 100;
	int b;
	int* p_a;

	// p_a �� a �̃A�h���X������
	p_a = &a;

	// b �� p_a �ɓ��͂��ꂽ�A�h���X��̒l������
	b = *p_a;

	printf("a\t= %d\n", a);
	printf("b\t= %d\n", b);
	printf("*p_a\t= %d\n", *p_a);
}
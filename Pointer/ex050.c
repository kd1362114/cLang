#include<stdio.h>
main()
{
	int a = 100;
	int* p_a;

	// p_a �� a �̃A�h���X������
	p_a = &a;

	printf("   a = %d\n", a);		// a �̒l
	printf("  &a = %d\n", &a);		// a �̃A�h���X
	printf(" p_a = %d\n", p_a);		// p_a �̒l ( a �̃A�h���X )
	printf("*p_a = %d\n", *p_a);	// p_a �ɓ��͂��ꂽ�A�h���X��̒l ( a �̒l )
	printf("&p_a = %d\n", &p_a);	// p_a �̃A�h���X
}
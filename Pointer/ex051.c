#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;

	a = 50;
	b = 10;

	p_a = &a;			// a のアドレスを p_a に入力
	p_b = &b;			// b のアドレスを p_b に入力

	c = *p_a + *p_b;	// p_a と p_b に入力されたアドレス先の値を参照

	printf("%d + %d = %d\n", a, b, c);
}
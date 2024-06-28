#include<stdio.h>
main()
{
	int a, b;
	int* p_a, * p_b, * keep;

	a = 100;
	b = 200;

	p_a = &a;			// a のアドレスを p_a に入力
	p_b = &b;			// b のアドレスを p_b に入力

	printf("実行前：*p_a = %d\t*p_b = %d\n", *p_a, *p_b);

	keep = p_a;
	p_a = p_b;
	p_b = keep;

	printf("実行後：*p_a = %d\t*p_b = %d\n", *p_a, *p_b);
}
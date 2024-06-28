#include<stdio.h>
main()
{
	int a, b, keep;
	int* p_a, * p_b;

	a = 100;
	b = 200;

	p_a = &a;			// a のアドレスを p_a に入力
	p_b = &b;			// b のアドレスを p_b に入力

	printf("実行前：a = %d\tb = %d\n", a, b);

	keep = *p_a;
	*p_a = *p_b;
	*p_b = keep;

	printf("実行後：a = %d\tb = %d\n", a, b);
}
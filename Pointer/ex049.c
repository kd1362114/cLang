#include<stdio.h>
main()
{
	int a = 100;
	int b;
	int* p_a;

	// p_a に a のアドレスを入れる
	p_a = &a;

	// b に p_a に入力されたアドレス先の値を入れる
	b = *p_a;

	printf("a\t= %d\n", a);
	printf("b\t= %d\n", b);
	printf("*p_a\t= %d\n", *p_a);
}
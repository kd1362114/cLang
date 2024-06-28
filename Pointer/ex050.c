#include<stdio.h>
main()
{
	int a = 100;
	int* p_a;

	// p_a に a のアドレスを入れる
	p_a = &a;

	printf("   a = %d\n", a);		// a の値
	printf("  &a = %d\n", &a);		// a のアドレス
	printf(" p_a = %d\n", p_a);		// p_a の値 ( a のアドレス )
	printf("*p_a = %d\n", *p_a);	// p_a に入力されたアドレス先の値 ( a の値 )
	printf("&p_a = %d\n", &p_a);	// p_a のアドレス
}
#include<stdio.h>
main()
{
	char a;

	printf("小文字を１文字入力：");
	scanf("%c", &a);
	printf("入力文字 = %c\n", a - 32);
}
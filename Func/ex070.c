#include<stdio.h>

int add(int a, int b);
int hiku(int a, int b);

main()
{
	int a, b;

	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);

	printf("足 = %d\n", add(a, b));
	printf("引 = %d\n", hiku(a, b));
}

// 足し算
int add(int a, int b)
{
	return(a + b);
}

// 引き算
int hiku(int a, int b)
{
	return(a - b);
}
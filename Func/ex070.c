#include<stdio.h>

int add(int a, int b);
int hiku(int a, int b);

main()
{
	int a, b;

	printf("�������Q���́F");
	scanf("%d%d", &a, &b);

	printf("�� = %d\n", add(a, b));
	printf("�� = %d\n", hiku(a, b));
}

// �����Z
int add(int a, int b)
{
	return(a + b);
}

// �����Z
int hiku(int a, int b)
{
	return(a - b);
}
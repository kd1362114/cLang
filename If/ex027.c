#include<stdio.h>
main()
{
	char a;

	printf("��������́F");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z')
	{
		printf("�ϊ� �� %c\n", a + 32);
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("�ϊ� �� %c\n", a - 32);
	}
	else
	{
		printf("�G���[\n");
	}
}
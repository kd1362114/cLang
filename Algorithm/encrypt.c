#include<stdio.h>
main()
{
	char s[100];

	printf("�Í������镶�������́F");
	scanf("%s", &s[0]);
	printf("\n");
	printf("�ϊ��O�F%s\n", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] += 1;
	}

	printf("�ϊ���F%s\n", s);
}
#include<stdio.h>
main()
{
	char s[100];

	printf("�Í������ꂽ���������́F");
	scanf("%s", &s[0]);
	printf("\n");
	printf("�����O�F%s\n", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}

	printf("������F%s\n", s);
}
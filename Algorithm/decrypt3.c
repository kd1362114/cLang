#include<stdio.h>

main()
{
	char s[20], k[20];

	printf("�Í������ꂽ���������́F");
	scanf("%s", &s[0]);
	printf("\n");

	printf("�Í����L�[�F");
	scanf("%s", &k[0]);

	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] -= (k[i] - '0');
	}

	printf("\n");
	printf("�ϊ���F%s\n", s);
}
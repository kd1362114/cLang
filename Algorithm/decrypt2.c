#include<stdio.h>

main()
{
	char s[20];
	int k[20];

	printf("�Í������ꂽ���������́F");
	scanf("%s", &s[0]);
	printf("\n");

	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̈Í����L�[�F",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}

	printf("\n");
	printf("�ϊ���F%s\n", s);
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int k[20];

	printf("�Í������镶�������́F");
	scanf("%s", &s[0]);
	printf("\n");
	printf("�ϊ��O�F%s\n", s);

	srand(time(0));
	for (int i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	
	// �\��
	printf("�ϊ���F%s\n", s);

	printf("�@�L�[�F");
	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}
	printf("\n");
}
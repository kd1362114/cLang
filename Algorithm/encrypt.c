#include<stdio.h>
main()
{
	char s[100];

	printf("暗号化する文字列を入力：");
	scanf("%s", &s[0]);
	printf("\n");
	printf("変換前：%s\n", s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] += 1;
	}

	printf("変換後：%s\n", s);
}
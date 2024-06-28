#include<stdio.h>

main()
{
	char s[20], k[20];

	printf("暗号化された文字列を入力：");
	scanf("%s", &s[0]);
	printf("\n");

	printf("暗号化キー：");
	scanf("%s", &k[0]);

	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] -= (k[i] - '0');
	}

	printf("\n");
	printf("変換後：%s\n", s);
}
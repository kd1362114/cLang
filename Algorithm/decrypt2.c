#include<stdio.h>

main()
{
	char s[20];
	int k[20];

	printf("暗号化された文字列を入力：");
	scanf("%s", &s[0]);
	printf("\n");

	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の暗号化キー：",i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}

	printf("\n");
	printf("変換後：%s\n", s);
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int k[20];

	printf("暗号化する文字列を入力：");
	scanf("%s", &s[0]);
	printf("\n");
	printf("変換前：%s\n", s);

	srand(time(0));
	for (int i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	
	// 表示
	printf("変換後：%s\n", s);

	printf("　キー：");
	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}
	printf("\n");
}
#include<stdio.h>
main()
{
	char a;

	printf("文字を入力：");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z')
	{
		printf("変換 → %c\n", a + 32);
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("変換 → %c\n", a - 32);
	}
	else
	{
		printf("エラー\n");
	}
}
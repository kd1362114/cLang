#include<stdio.h>
main()
{
	char str[256];
	printf("文字列を入力：");

	while (gets(str) != NULL)
	{
		printf("%s\n", str);
		gets(str);
		printf("文字列を入力：";
	}
}
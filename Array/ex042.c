#include<stdio.h>
main()
{
	char data[] = "Apple";

	printf("１文字ずつ表示\n");

	for (int i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}

	printf("\n\n");
	printf("文字列の表示\n");
	printf("%s\n", &data[0]);
}
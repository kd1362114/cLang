#include<stdio.h>
main()
{
	char data[] = "Apple";

	printf("�P�������\��\n");

	for (int i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}

	printf("\n\n");
	printf("������̕\��\n");
	printf("%s\n", &data[0]);
}
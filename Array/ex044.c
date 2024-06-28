#include<stdio.h>
main()
{
	char data1[100], data2[100], keep[100];

	printf("data1‚ğ“ü—ÍF");
	scanf("%s", &data1[0]);
	printf("data2‚ğ“ü—ÍF");
	scanf("%s", &data2[0]);

	printf("\n");
	printf("data1 = %s\n", data1);
	printf("data2 = %s\n", data2);
	printf("\n“ü‚ê‘Ö‚¦‚é‚Æ\n");

	/*
	int i;
	for (i = 0; keep[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = keep[i]; i++);
	*/

	int i;
	for (i = 0; data1[i] != '\0'; i++)
	{
		keep[i] = data1[i];
	}
	keep[i] = '\0';
	for (i = 0; data2[i] != '\0'; i++)
	{
		data1[i] = data2[i];
	}
	data1[i] = '\0';
	for (i = 0; keep[i] != '\0'; i++)
	{
		data2[i] = keep[i];
	}
	data2[i] = '\0';

	printf("\n");
	printf("data1 = %s\n", data1);
	printf("data2 = %s\n", data2);
}
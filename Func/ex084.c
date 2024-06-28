#include<stdio.h>

void irekae(char[], char[], int);

main()
{
	char str1[256], str2[256];
	printf("•¶š—ñF");
	scanf("%s", str1);

	int cnt;
	for (cnt = 0; str1[cnt] != '\0'; cnt++);

	irekae(str1, str2, cnt);

	printf("%s\n", str1);
	printf("%s\n", str2);
}

void irekae(char str1[], char str2[], int num)
{
	int i, j;
	for (i = num - 1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	str2[j] = '\0';
	return;
}
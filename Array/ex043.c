#include<stdio.h>
#include<string.h>
main()
{
	char data[] = "orange";
	int cnt;

	for (cnt = 0; data[cnt] != '\0'; cnt++);

	printf("文字列は%s\n", data);
	printf("文字数は%d\n", cnt);

	//実は一行で出来る
	printf("文字数は%d\n", strlen(data));
}
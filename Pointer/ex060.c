#include<stdio.h>
main()
{
	char data[100] = "Language";
	char* p_data;
	char ken;

	p_data = data;

	printf("data[] = %s\n", p_data);
	printf("検索文字：");
	scanf("%c", &ken);

	for (int cnt = 0; *p_data != '\0'; cnt++)
	{
		if (ken == *p_data)
		{
			printf("%d ", cnt + 1);
		}
		p_data++;
	}
	printf("文字目です\n");
}
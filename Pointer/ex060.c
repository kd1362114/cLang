#include<stdio.h>
main()
{
	char data[100] = "Language";
	char* p_data;
	char ken;

	p_data = data;

	printf("data[] = %s\n", p_data);
	printf("ŒŸõ•¶šF");
	scanf("%c", &ken);

	for (int cnt = 0; *p_data != '\0'; cnt++)
	{
		if (ken == *p_data)
		{
			printf("%d ", cnt + 1);
		}
		p_data++;
	}
	printf("•¶š–Ú‚Å‚·\n");
}
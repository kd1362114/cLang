#include<stdio.h>

void gatai(char*, char*);

main()
{
	char a[256], b[256];

	printf("������P�F");
	scanf("%s", a);
	printf("������Q�F");
	scanf("%s", b);

	gatai(a, b);

	printf("%s\n", a);
}

void gatai(char* p_a, char* p_b)
{
	while (*p_a != '\0')
	{
		p_a++;
	}

	while (*p_b != '\0')
	{
		*p_a = *p_b;
		p_a++;
		p_b++;
	}
	*p_a = '\0';
	return;
}
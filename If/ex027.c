#include<stdio.h>
main()
{
	char a;

	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z')
	{
		printf("•ÏŠ· ¨ %c\n", a + 32);
	}
	else if (a >= 'a' && a <= 'z')
	{
		printf("•ÏŠ· ¨ %c\n", a - 32);
	}
	else
	{
		printf("ƒGƒ‰[\n");
	}
}
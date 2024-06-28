#include<stdio.h>
main()
{
	int a, h, m, s;

	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &a);

	if (a > 5000)
	{
		printf("‹K’èŠO‚Ì”’l‚Å‚· (5000‚Ü‚Å)\n");
	}
	else
	{
		h = a / 3600;
		m = a % 3600 / 60;
		s = a % 3600 % 60;

		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
	}
}
#include<stdio.h>
main()
{
	int sey;

	printf("¼—ï‚ğ“ü—ÍF");
	scanf("%d", &sey);

	if (sey % 4 == 0 && (sey % 100 != 0 || sey % 400 == 0))
	{
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	else
	{
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
}
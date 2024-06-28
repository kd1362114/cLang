#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un;

	srand(time(0));
	un = rand() % 5 + 1;

	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	for (int i = 1; i <= un; i++)
	{
		printf("™");
	}
	printf(" ‚¾‚æI\n");
}
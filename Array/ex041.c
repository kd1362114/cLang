#include<stdio.h>
main()
{
	float sum = 0, box[3];

	for (int n = 0; n < 3; n++)
	{
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[n]);
		sum += box[n];
	}

	printf("\n");
	printf("‡Œv = %.2f\n", sum);
	printf("•½‹Ï = %.2f\n", sum / 3);
}
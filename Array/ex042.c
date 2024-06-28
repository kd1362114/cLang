#include<stdio.h>
main()
{
	char data[] = "Apple";

	printf("‚P•¶Žš‚¸‚Â•\Ž¦\n");

	for (int i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}

	printf("\n\n");
	printf("•¶Žš—ñ‚Ì•\Ž¦\n");
	printf("%s\n", &data[0]);
}
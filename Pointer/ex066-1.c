#include<stdio.h>
main()
{
	char* p_game[3] = { "will","ds","playstation4" };
	char** p;

	for (int i = 0; i < 3; i++)
	{
		p = &p_game[i];
		while (**p)
		{
			printf("%c", **p);
			(*p)++;
		}
		printf("\n");
	}
}
#include<stdio.h>
main()
{
	char* p_game[3] = { "will","ds","playstation4" };
	char** p;
	p = p_game;

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", *p++);
	}
}
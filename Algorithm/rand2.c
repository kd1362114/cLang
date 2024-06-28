#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int dice;

	srand(time(0));
	
	for (int i = 0; i < 6; i++)
	{
		dice = rand() % 6 + 1;
		printf("ƒTƒCƒRƒ‚Í%d‚Å‚·\n", dice);
	}
}
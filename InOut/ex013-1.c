#include<stdio.h>
main()
{
	char five, six;
	five = '5';
	six = '6';

	printf("%c Å~ %c = %d\n", five, six, (five - 48) * (six - 48));
}
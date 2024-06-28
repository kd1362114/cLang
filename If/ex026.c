#include<stdio.h>
main()
{
	int m,end;
	
	printf("Œ‚ğ“ü—ÍF");
	scanf("%d", &m);

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		end = 31;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		end = 30;
	}
	else
	{
		end = 28;
	}
	printf("Œ––‚Í%d“ú\n", end);
}
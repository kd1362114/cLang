#include<stdio.h>
main()
{
	int people[2][2][3] = {
		{
			{3,4,5},
			{4,5,6}
		},
		{
			{2,2,3},
			{2,5,6}
		},
	};

	int sum = 0;
	int ap, kai, heya;
	for (ap = 0; ap < 2; ap++)
	{
		printf("アパート%d\n", ap + 1);
		for (kai = 0; kai < 2; kai++)
		{
			printf("(%d階)：", kai + 1);
				for (heya = 0; heya < 3; heya++)
				{
					printf("%d ", people[ap][kai][heya]);
					sum += people[ap][kai][heya];
				}
				printf("\n");
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます\n", sum);
}
#include<stdio.h>
main()
{
	int en,a,b;
	float ans;

	printf("���Z�q����́F");
	scanf("%d", &en);
	printf("�Q�̐�������́F");
	scanf("%d%d", &a, &b);

	if (en == 1)
	{
		ans = a + b;
		printf("%d + %d = %.0f\n", a, b, ans);
	}
	else if (en == 2)
	{
		ans = a - b;
		printf("%d - %d = %.0f\n", a, b, ans);
	}
	else if (en == 3)
	{
		ans = a * b;
		printf("%d * %d = %.0f\n", a, b, ans);
	}
	else if (en == 4)
	{
		ans = (float)a / (float)b;
		printf("%d / %d = %.3f\n", a, b, ans);
	}

	/*
	if (en == 1)
	{
		ans = a + b;
		printf("%d + %d = %.0f\n", a, b, ans);
	}
	else
	{
		if (en == 2)
		{
			ans = a - b;
			printf("%d - %d = %.0f\n", a, b, ans);
		}
		else
		{
			if (en == 3)
			{
				ans = a * b;
				printf("%d * %d = %.0f\n", a, b, ans);
			}
			else
			{
				if (en == 4)
				{
					ans = (float)a / (float)b;
					printf("%d / %d = %.3f\n", a, b, ans);
				}
			}
		}
	}
	*/
}
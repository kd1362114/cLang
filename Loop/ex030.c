#include<stdio.h>
main()
{
	int a, i, ans;
	i = 0;
	ans = 0;

	printf("”’l‚ğ“ü—ÍF");
	scanf("%d", &a);

	while (i <= 10)
	{
		ans = a + i;
		printf("%d + %d = %d\n", a, i, ans);
		i++;
	}
}
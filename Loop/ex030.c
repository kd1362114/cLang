#include<stdio.h>
main()
{
	int a, i, ans;
	i = 0;
	ans = 0;

	printf("数値を入力：");
	scanf("%d", &a);

	while (i <= 10)
	{
		ans = a + i;
		printf("%d + %d = %d\n", a, i, ans);
		i++;
	}
}
#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("���l���R���́F");
	ret = scanf("%d%d%d", &a, &b, &c);

	printf("ret\t: %d\n", ret);
	printf("a\t: %d\n", a);
	printf("b\t: %d\n", b);
	printf("c\t: %d\n", c);

	printf("\n");
	printf("���l���P���́F");
	while (scanf("%d", &a) != EOF)
	{
		printf("���l�F%d\n\n", a);
		printf("���l���P���́F");
	}
}
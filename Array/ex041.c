#include<stdio.h>
main()
{
	float sum = 0, box[3];

	for (int n = 0; n < 3; n++)
	{
		printf("実数を入力：");
		scanf("%f", &box[n]);
		sum += box[n];
	}

	printf("\n");
	printf("合計 = %.2f\n", sum);
	printf("平均 = %.2f\n", sum / 3);
}
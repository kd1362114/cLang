#include<stdio.h>
main()
{
	float sum = 0, box[3];

	for (int n = 0; n < 3; n++)
	{
		printf("��������́F");
		scanf("%f", &box[n]);
		sum += box[n];
	}

	printf("\n");
	printf("���v = %.2f\n", sum);
	printf("���� = %.2f\n", sum / 3);
}
#include<stdio.h>
main()
{
	int sum;

	//�z��̐퓬�v�f�̂ݏȗ���
	int a[][3] = {
		{10,20,30},
		{1,2,3}
	};

	for (int i = 0; i < 2; i++)
	{
		sum = 0;
		for (int j = 0; j < 3; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("%d�s�ڂ̍��v= %d\n\n", i, sum);
	}
}
#include<stdio.h>

void gouhei(int x, int y, int* sum, float* ave);

main()
{
	int a, b, c;
	float d;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);

	gouhei(a, b, &c, &d);

	printf("���v = %d\t���� = %.2f\n", c, d);
}

// ���v�A���ς����߂�
void gouhei(int x, int y, int* sum, float* ave)
{
	*sum = x + y;
	*ave = (float)*sum / 2;
	return;
}
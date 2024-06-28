#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };

	int int_sum = 0;
	int* p_a;
	p_a = a;
	for (int i = 0; i < 6; i++)
	{
		int_sum += *p_a;
		p_a++;
	}

	float float_sum = 0;
	float* p_b;
	p_b = b;
	for (int i = 0; i < 4; i++)
	{
		float_sum += *p_b;
		p_b++;
	}

	printf("合計：%d\t平均：%.3f\n", int_sum, (float)int_sum / 6);
	printf("合計：%.3f\t平均：%.3f\n", float_sum, float_sum / 4);
}
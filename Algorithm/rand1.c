#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));		// �����̏�����(�V���b�t��)

	for (int i = 0; i < 3; i++)
	{
		kazu = rand();
		printf("��������������%d�ł�\n", kazu);
	}
}
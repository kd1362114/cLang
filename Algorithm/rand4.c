#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un;

	srand(time(0));
	un = rand() % 5 + 1;

	printf("�����̂��Ȃ��̉^����");
	for (int i = 1; i <= un; i++)
	{
		printf("��");
	}
	printf(" ����I\n");
}
#include<stdio.h>
#include<stdio.h>
#include<time.h>

main()
{
	// �v���C���[�̃n���h����́A�\��
	int playerHand;
	printf("�P�F�O�[\n�Q�F�`���L\n�R�F�p�[\n");
	printf("����\���� �� ");
	scanf("%d", &playerHand);
	printf("\n");

	if (playerHand == 1)
	{
		printf("�����F�O�[\n");
	}
	else if (playerHand == 2)
	{
		printf("�����F�`���L\n");
	}
	else if (playerHand == 3)
	{
		printf("�����F�p�[\n");
	}
	else
	{
		printf("���܂�... ���E�𒴂���C���b!!!\n");
	}

	// CP�̃n���h������A�\��
	int cpHand;
	if (playerHand >= 1 && playerHand <= 3)
	{
		srand(time(0));
		cpHand = rand() % 3 + 1;

		if (cpHand == 1)
		{
			printf("����F�O�[\n");
		}
		else if (cpHand == 2)
		{
			printf("����F�`���L\n");
		}
		else if (cpHand == 3)
		{
			printf("����F�p�[\n");
		}
	}
	else
	{
		cpHand = 0;
	}

	// ���s����
	printf("\n");
	if (playerHand == cpHand)
	{
		printf("������\n");
	}
	if ((playerHand == 1 && cpHand == 2) || (playerHand == 2 && cpHand == 3) || (playerHand == 3 && cpHand == 1) || cpHand == 0)
	{
		printf("�����b!!!\n");
	}
	if ((playerHand == 1 && cpHand == 3) || (playerHand == 2 && cpHand == 1) || (playerHand == 3 && cpHand == 2))
	{
		printf("�s�k�b!!!\n");
	}
}
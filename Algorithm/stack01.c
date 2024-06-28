#include<stdio.h>

#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;
	
	do
	{
		printf("\n\n�v�b�V���� i , �|�b�v�� o ����͂��āF");
		key = getche();
		printf("\n");

		// �v�b�V������
		if (key == 'i')
		{
			printf("�f�[�^���́F");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n�I�I�I�X�^�b�N�������ς��ł��I�I�I\n");
			}
			else
			{
				display();
			}
		}

		// �|�b�v����
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n�I�I�I�X�^�b�N����ł��I�I�I\n");
			}
			else
			{
				printf("�L���[����f�[�^ (%d) �����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

// �X�b�^�N�\��
void display(void)
{
	int i;

	printf("\n====���݂̃X�b�^�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp)
		{
			printf(" �� sp �������Ă��鏊 (���� sp ��%d)", sp);

		}
		printf("\n");
	}
	return;
}

// �X�b�^�N�Ƀf�[�^��ς�(�v�b�V��)
int push(int d)
{
	if (sp == STACKSIZE)
	{
		return -1;
	}
	stack[sp] = d;
	sp++;
	return 0;
}

// �X�b�^�N����f�[�^�����o��(�|�b�v)
int pop(int* pd)
{
	if (sp == 0)
	{
		return -1;
	}
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;

	return 0;
}
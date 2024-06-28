#include<stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

// �v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int* pd);

// ���C���֐�
main()
{
	int key, data, resulet;
	do
	{
		printf("\n\n�G���L���[�� i , �f�L���[�� o ����́F");
		key = getche();
		printf("\n");

		// �G���L���[����
		if (key == 'i')
		{
			printf("�f�[�^���́F");
			scanf("%d", &data);
			resulet = enqueue(data);
			if (resulet == -1)
			{
				printf("�I�I�I�L���[�������ς��ł��I�I�I\n");
			}
			else
			{
				display();
			}
		}
		// �f�L���[����
		if (key == 'o')
		{
			resulet = dequeue(&data);
			if (resulet == -1)
			{
				printf("�I�I�I�L���[����ł��I�I�I\n");
			}
			else
			{
				printf("�L���[����f�[�^ (%d) �����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

// �L���[�\��
void display(void)
{
	int i;

	printf("\n====���݂̃L���[�̓��e===\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("stack[%2d]��%5d", i, queue[i]);
		if (i == head)
		{
			printf(" �� head ���\�����Ă��鏊 (���� head ��%d)", head);
		}
		if (i == tail)
		{
			printf(" �� tail ���\�����Ă��鏊 (���� tail ��%d)", tail);
		}
		printf("\n");
	}
	return;
}

// �L���[�Ƀf�[�^������(�G���L���[)
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head)
	{
		return -1;
	}
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;

	return 0;
}

// �L���[����f�[�^�����o��(�f�L���[)
int dequeue(int* pd)
{
	if (head == tail)
	{
		return -1;
	}
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;

	return 0;
}
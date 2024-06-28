#include<stdio.h>

#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

// プロトタイプ宣言
void display(void);
int enqueue(int d);
int dequeue(int* pd);

// メイン関数
main()
{
	int key, data, resulet;
	do
	{
		printf("\n\nエンキューは i , デキューは o を入力：");
		key = getche();
		printf("\n");

		// エンキュー処理
		if (key == 'i')
		{
			printf("データ入力：");
			scanf("%d", &data);
			resulet = enqueue(data);
			if (resulet == -1)
			{
				printf("！！！キューがいっぱいです！！！\n");
			}
			else
			{
				display();
			}
		}
		// デキュー処理
		if (key == 'o')
		{
			resulet = dequeue(&data);
			if (resulet == -1)
			{
				printf("！！！キューが空です！！！\n");
			}
			else
			{
				printf("キューからデータ (%d) を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

// キュー表示
void display(void)
{
	int i;

	printf("\n====現在のキューの内容===\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("stack[%2d]は%5d", i, queue[i]);
		if (i == head)
		{
			printf(" ← head が表示している所 (現在 head は%d)", head);
		}
		if (i == tail)
		{
			printf(" ← tail が表示している所 (現在 tail は%d)", tail);
		}
		printf("\n");
	}
	return;
}

// キューにデータを入れる(エンキュー)
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

// キューからデータを取り出す(デキュー)
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
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));		// 乱数の初期化(シャッフル)

	for (int i = 0; i < 3; i++)
	{
		kazu = rand();
		printf("発生した乱数は%dです\n", kazu);
	}
}
#include<stdio.h>
main()
{
	char moji,keep;
	int a, b;

	//�啶���A�������A����
	for (a = 0; a <= 2; a++)
	{
		switch (a)
		{
			case 0:
				keep = 'A';
				break;
			case 1:
				keep = 'a';
				break;
			case 2:
				keep = '0';
				break;
		}
		moji = keep;
		for (b = 0; b <= 2; b++)
		{
			moji = moji + b;
			printf("%c�F%d 0x%x\n", moji, moji, moji);
			moji = keep;
		}
	}

	//��
	moji = ' ';
	printf("%c�F%d 0x%x\n", moji, moji, moji);
}
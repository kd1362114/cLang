#include<stdio.h>
main()
{
	char moji,keep;
	int a, b;

	//大文字、小文字、数字
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
			printf("%c：%d 0x%x\n", moji, moji, moji);
			moji = keep;
		}
	}

	//△
	moji = ' ';
	printf("%c：%d 0x%x\n", moji, moji, moji);
}
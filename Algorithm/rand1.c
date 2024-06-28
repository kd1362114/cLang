#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));		// —”‚Ì‰Šú‰»(ƒVƒƒƒbƒtƒ‹)

	for (int i = 0; i < 3; i++)
	{
		kazu = rand();
		printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);
	}
}
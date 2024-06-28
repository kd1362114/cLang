#include<stdio.h>

main()
{
	FILE* fp;
	int lv, hp;
	char str[256];

	fp = fopen("file02.txt", "r");

	fscanf(fp, "%d%d%s", &lv, &hp, str);
	printf("Lv：%d　HP：%d　装備：%s\n", lv, hp, str);

	fclose(fp);
}
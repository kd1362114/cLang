#include<stdio.h>

int strcnt(char*);

main()
{
	char buf[256];
	int mojisu;

	printf("文字列：");
	gets(buf);
	printf("%d文字\n", strcnt(buf));
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}
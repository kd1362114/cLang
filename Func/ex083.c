#include<stdio.h>

int strcnt(char*);

main()
{
	char buf[256];
	int mojisu;

	printf("•¶š—ñF");
	gets(buf);
	printf("%d•¶š\n", strcnt(buf));
}

int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}
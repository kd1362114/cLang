#include<stdio.h>
#include<string.h>
main()
{
	char data[] = "orange";
	int cnt;

	for (cnt = 0; data[cnt] != '\0'; cnt++);

	printf("•¶š—ñ‚Í%s\n", data);
	printf("•¶š”‚Í%d\n", cnt);

	//À‚Íˆês‚Åo—ˆ‚é
	printf("•¶š”‚Í%d\n", strlen(data));
}
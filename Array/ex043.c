#include<stdio.h>
#include<string.h>
main()
{
	char data[] = "orange";
	int cnt;

	for (cnt = 0; data[cnt] != '\0'; cnt++);

	printf("�������%s\n", data);
	printf("��������%d\n", cnt);

	//���͈�s�ŏo����
	printf("��������%d\n", strlen(data));
}
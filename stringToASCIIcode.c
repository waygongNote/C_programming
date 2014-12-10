#include <stdio.h>
int main(int argc, char *argv[])
{
	char s[10]="42 46";
	unsigned int i[2]={0,0};
	int k=0;
	for (k=0;k<=3;k+=3)
		sscanf(&s[k], "%x", &i[k/3]);
	printf("%x %x\n", i[0], i[1]);
	printf("%s\n", (char *)&i);
	return 0;
}

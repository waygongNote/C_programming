#include <stdio.h>
#include <string.h>

void myDebug(int i)
{
    char ss[10]="OKOK_xxx\n";
    ss[5]='0'+(i/100)%10;
    ss[6]='0'+(i/10)%10;
    ss[7]='0'+(i/1)%10;
	printf("%s\n", ss);
}

int main(int argc, char *argv[])
{
    char s[10]="xxx\n\n\n";
	int i;
	for (i=555; i<560;i++) {
		printf("[%d]\t");myDebug(i);myDebug(__LINE__);
	}

    return 0;
}

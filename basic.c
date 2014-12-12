#include <stdio.h>
#include <string.h>

void myDebug(int i)
{
    char ss[10]="OKOK_xxx\n";
    ss[5]='0'+(i/100)%10;
    ss[6]='0'+(i/10)%10;
    ss[7]='0'+(i/1)%10;
	printf("%s\n", ss);
//    s->text = ss;
//    s->sentlen = 9;
//    uip_send(s->text, s->sentlen);
}

int main(int argc, char *argv[])
{
    printf("%c\n", 'B'-1);  // A
    printf("%d\n", 'B'-1);  // 65
    printf("%c\n", 1+'A');  // B
    printf("%d\n\n", 1+'A');// 66

    printf("%d\n", sizeof(unsigned short)); // 2
    unsigned short us;

    char s[10]="xxx\n\n\n";
    s[0]='B';
    printf("%s\n", s);
    printf("%d\n", strlen(s));
printf("+++++++++++++++++++++++++++++++++++\n");
	int i;
	for (i=555; i<560;i++) {
		printf("[%d]\t");
		myDebug(i);
		myDebug(__LINE__);
	}

    return 0;
}

#include <stdio.h>
#include <string.h>
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
    return 0;
}

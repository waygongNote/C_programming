#include <stdio.h>
typedef struct {
    unsigned char flags;
    char *text;
    unsigned short textlen;
    unsigned short sentlen;
} S1;
typedef struct {
    unsigned char c;
    char cc;
    unsigned short textlen;
    unsigned short sentlen;
} S2;
int main(int argc, char *argv[])
{
	char s[]="ZZZ";
	unsigned char s2[]="ZZZ";
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(\"ZZZ\") = %d\n", sizeof(s));
	printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int));
	printf("sizeof(unsigned short) = %d\n", sizeof(unsigned short));
	printf("sizeof(unsigned char) = %d\n", sizeof(unsigned char));
	printf("sizeof(unsigned char \"ZZZ\") = %d\n", sizeof(s2));

	printf("\nsizeof(struct) = %d\n", sizeof(S1));
	printf("sizeof(struct) = %d\n", sizeof(S2));
	
	return 0;
}

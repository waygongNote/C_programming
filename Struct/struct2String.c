#include <stdio.h>
typedef struct {
//	unsigned short us1[2];
//	unsigned short us2;
//	unsigned char uc1;
//	unsigned char uc2[10];
	char i2[10];
	int i1;
} SS;
int main(int argc, char *argv[])
{
	SS s = {"AB", 22};
	printf("%d %p\n", s.i1, &(s.i1));
	printf("%s %p\n", s.i2, &(s.i2));
	printf("%d %p\n", s, s);
//	SS s = {{11, 12}, 22, "33", "44"};
//	printf("%x %x %x %x %x\n", s, s.us1, s.us2, s.uc1, s.uc2);
//	printf("%u %u %u %u %u\n", s, s.us1, s.us2, s.uc1, s.uc2);
//	printf("%p %p %p %p\n", s, s->us1, s->us2, s->uc1, s->uc2);
	return 0;
}

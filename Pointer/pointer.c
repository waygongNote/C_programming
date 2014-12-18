#include <stdio.h>
#include "/home/Wayne_Huang/C_programming/Struct/struct.h"
void func2 (void);
void func2_1 (struct telnet_state *, char *);
int main(int argc, char *argv[])
{
	func2();
	return 0;
}
void func2 (void)
{
	struct telnet_state *s;
#if 1
	char **s1={(char *)0x000000ff, (char *)0x000000fb};
//	char **s1=s2;

	printf("s1(%%s) = %s, s1(%%p) = %p, &s1(%%p) = %p\n", s1, s1, &s1);
	printf("*s1(%%p) = %p, *(s1+1)(%%p) = %p, *(s1+2)(%%p) = %p\n", *s1, *(s1+1), *(s1+2));
	func2_1(s, s1);
#endif
#if 0
	char s0[]="zy2345678901";
	printf("s0(%%s) = %s, s0(%%p) = %p, &s0(%%p) = %p\n", s0, s0, &s0);
	func2_1(s0);
#endif
}
void func2_1 (struct telnet_state *s, char *sx)
{
	printf("=================================\n");
	printf("sx(%%s) = %s, sx(%%p) = %p, &sx(%%p) = %p\n", sx, sx, &sx);
	printf("*sx(%%p) = %p, *(sx+1)(%%p) = %p, *(sx+2)(%%p) = %p\n", *sx, *(sx+1), *(sx+2));
	printf("=================================\n");
	s->text = sx;
	printf("sx(%%s) = %s, sx(%%p) = %p, &sx(%%p) = %p\n", sx, sx, &sx);
	printf("*sx(%%p) = %p, *(sx+1)(%%p) = %p, *(sx+2)(%%p) = %p\n", *sx, *(sx+1), *(sx+2));
//	printf();
}
void func1 (void) {
	char s1[]="ABC";
	printf("s1 = %s (%p)\n", s1, s1);

	char *s2;
	s2 = s1;
	printf("s2 = %s (%p)\n", s2, s2);

	char *s3="DEF";
	printf("s3 = %s (%p)\n", s3, s3);

	char *s4;
	s4 = s3;
	printf("s4 = %s (%p)\n", s4, s4);

	printf("&s1 = %p\n&s2 = %p\n&s3 = %p\n&s4 = %p\n", &s1, &s2, &s3, &s4);
	printf("%s\n%s\n%s\n%s\n", s1, s2, s3, s4);
	printf("%s\n", 0x28ac3c);
	printf("%p %p\n", &s1, s1);
}

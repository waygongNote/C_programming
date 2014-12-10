#include <stdio.h>
int main(int argc, char *argv[])
{
	char s1[]="Go";
	printf("s1 = %s\n", s1);

	char *s2;
	s2 = s1;
	printf("s2 = %s\n", s2);

//	char s3[10]="";
//	s3 = s2;
//	printf("s3 = %s\n", s3);
	return 0;
}

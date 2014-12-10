#include <stdio.h>
int main(int argc, char *argv[])
{
	unsigned int i=65;
	char s='B';
	printf("s = %d\n", s);
	sprintf(&s, "%c", i);
	printf("s = %d\n", s);
	return 0;	
}

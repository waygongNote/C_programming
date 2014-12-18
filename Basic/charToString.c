#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
//	char *s="AB";
//	*(s+0)='C';
	char *s={'A', 'B', '\0'};
	printf("%s\n", s);
	return 0;
}

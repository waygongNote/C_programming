#include <stdio.h>
int main(int argc, char *argv[])
{
	char s1[] = "100";
	unsigned int ui = 0;
	sscanf(s1, "%x", &ui);
	printf("0x100 = %d\n", ui);
	return 0;
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	unsigned int c = 0xff;
	printf("unsigned int c = 0x%x = %d\n", c, c);

	unsigned int c2[2] = {0xff,0xff};
	printf("unsigned int c2[2] = {0x%x, 0x%x}\n", c2[0], c2[1]);

	char *c3;
	c3 = (char *)&c2;
	printf("\n");
	printf("(char *)&c2 = %s\n", (char *)&c2);

	return 0;
}

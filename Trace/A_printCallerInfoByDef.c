#include <stdio.h>
#define funcNew() do { printf("caller = %s()\n", __func__);func(); } while (0)
void func(void);
int main(int argc, char *argv[])
{
//	func();
	funcNew();
	return 0;
}
void func(void) {
	printf("content of func()\n");
}

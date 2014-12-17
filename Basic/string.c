#include <stdio.h>
void func(int ptr2, int i2){
	printf("*ptr2 = %d, ptr2 = 0x%x\n", *ptr2, ptr2);
	ptr2 = &i2;
	printf("*ptr2 = %d, ptr2 = 0x%x\n", *ptr2, ptr2);
}
int main(int argc, char *argv[])
{
	int *ptr1;
	int i1=111;
	ptr1 = &i1;
	printf("*ptr1 = %d, ptr1 = 0x%x\n", *ptr1, ptr1);
	func(*ptr1, i1);
	printf("*ptr1 = %d, ptr1 = 0x%x\n", *ptr1, ptr1);
	return 0;
}

// static��ӥت�:
// (1) ����b"���ɮ�"���ϥ�, �קK���ɭ��ƫŧi
// (2) �f�t�ŧi�ɳ]�w��l��, �F��u���Ȥ@��, �A���i�J"�����"�ɤ��|���ƪ�l��, �i���򤧫��ܤƪ��ت�

#include <stdio.h>
 
void func() {
	static int x = 0; // �bfunc���T���եΤ�, x�u�i��@����l��
	int y = 0; // �bfunc���T���եΤ�, y�i��T����l��
	printf("x= %d, y = %d\n", x, y); // ��Xx����
	x = x + 1;
	y = y + 1;
}
 
int main(int argc, char * const argv[]) {
	func(); // ��X0
	func(); // ��X1
	func(); // ��X2
	return 0;
}

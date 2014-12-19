// static兩個目的:
// (1) 限制在"此檔案"內使用, 避免跨檔重複宣告
// (2) 搭配宣告時設定初始值, 達到只給值一次, 再次進入"此函數"時不會重複初始化, 可延續之後變化的目的

#include <stdio.h>
 
void func() {
	static int x = 0; // 在func的三次調用中, x只進行一次初始化
	int y = 0; // 在func的三次調用中, y進行三次初始化
	printf("x= %d, y = %d\n", x, y); // 輸出x的值
	x = x + 1;
	y = y + 1;
}
 
int main(int argc, char * const argv[]) {
	func(); // 輸出0
	func(); // 輸出1
	func(); // 輸出2
	return 0;
}

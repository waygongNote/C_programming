#include <stdio.h>
#include <string.h>

__attribute__((no_instrument_function))
	void __cyg_profile_func_enter( void *func_address, void *callsite )
    {
		char cmdS[200]="";
		char funcP[20];
		printf("Enter\n");
		sprintf(funcP, "%x", func_address);
//		sprintf(cmdS, "test -e test.map && cat test.map | grep %s || echo \"test.map doesn't exist\"", funcP);
//		system(cmdS);
		sprintf(cmdS, "addr2line %s -e AB.o -f", funcP);
		printf("%s\n", cmdS);
		system(cmdS);
    }
__attribute__((no_instrument_function))
	void __cyg_profile_func_exit(void *func_address, void *call_site){
		char cmdS[200]="";
		char funcP[20];
		printf("Exit\n");
		sprintf(funcP, "%x", func_address);
		sprintf(cmdS, "test -e test.map && cat test.map | grep %s || echo \"test.map doesn't exist\"", funcP);
		system(cmdS);
	}
void func(void){
	printf("content of func()\n");
}

int main(int argc, char *argv[]) {
	func();
	
//	funcNew();
	return 0;
}

// (update) gcc -finstrument-functions -Wl,-Map=test.map -g test.c -o test.o
// (past) gcc -finstrument-functions 
// (past) gcc -Wl,-Map=test.map -g -o test test.c
// cat test.map |grep "\ main$" |sed 's/^[ ]*//g' |awk '{FS=" "}{print $2}'

// maybe dladdr() or backtrace() or objdump() or addr2line() are ok, too. => But I don't know how to use them.
// cf. [GCC 函式追蹤功能] http://blog.linux.org.tw/~jserv/archives/001870.html
// cf. [Who Call Me (更新版)] http://blog.linux.org.tw/~jserv/archives/002054.html

//if [ $# == 1 ] && [ $(echo $0 | tail -c 14) == "if_else_fi.sh" ]; then
//    echo "$@"
//	echo "$(echo $0 | tail -c 14)"
//fi
//#define funcNew() do { printf("[%s(): %d] ", __func__, __LINE__);func(__LINE__); } while (0)
//		sprintf(cmdS, "test -e test.map && cat test.map | grep %s || echo \"test.map doesn't exist\" | awk '{FS= \" \"}{printf $1}' ", funcP);
//		sprintf(cmdS, "test -e test.map && cat test.map | grep %s || echo \"test.map doesn't exist\" | sed 's/^[ ]*//g' ", funcP);

#include <stdio.h>

//#define funcNew() do { printf("[%s(): %d] ", __func__, __LINE__);func(__LINE__); } while (0)
__attribute__((no_instrument_function))
	void __cyg_profile_func_enter( void *func, void *callsite )
    {
		printf("Enter\n");
		printf("*func = %p, *callsite = %p\n", func, callsite);
    }
__attribute__((no_instrument_function))
	void __cyg_profile_func_exit(void *func_address, void *call_site){
		printf("Exit\n");
	}
void func(void){
	printf("content of func()\n");
}

int main(int argc, char *argv[]) {
	func();
	
//	funcNew();
	return 0;
}
// add "-finstrument-functions" when compiler!!
// maybe dladdr() or backtrace() are ok, too. => But I don't know how to use them.

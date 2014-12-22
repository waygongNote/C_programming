#include <stdio.h>
__attribute__((no_instrument_function))
	void __cyg_profile_func_enter(void *func_address, void *call_site){
		printf("Enter\n");
	}
__attribute__((no_instrument_function))
	void __cyg_profile_func_exit(void *func_address, void *call_site){
		printf("Exit\n");
	}
void func(){
	    printf("Test\n");
}

int main(int argc, char *argv[]) {
	func();
	return 0;
}
// add "-finstrument-functions" when compiler!!

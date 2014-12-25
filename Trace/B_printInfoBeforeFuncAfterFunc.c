/*
 * Note:
 * 1. Must write "#define _GNU_SOURCE" at the first line to use
 * structure Dl_info when include <dlfcn.h>.
 * 2. Add "CFLAGS+= -rdynamic -ldl -finstrument-functions" in
 * Makefile (for each dir/subdir you want to trace) to compile
 * correctly.
 */

/*
 * this file cannot compile correctly in cygwin, please compile it in Linux!!!
 */
/*
 * hide it because it can't compile correctly as cross compile in mips.
#define _GNU_SOURCE
#include <dlfcn.h>
*/
#include <stdio.h>
#include <dlfcn.h>
__attribute__((no_instrument_function))
    void __cyg_profile_func_enter(void *func_address, void *call_site){
        printf("Enter\n");
/*
        Dl_info info;
        if (dladdr(func_address, &info)) { // if (dladdr(func_address, &info) != 0) {
            // printf("%s", info.dli_sname);
            printf("%s\n", (info.dli_sname?info.dli_sname:"<unknown>"));

        }
*/
    }
/* Add for trace code */
__attribute__((no_instrument_function))
    void __cyg_profile_func_enter( void *func_address, void *call_site )
    {
        Dl_info info;
        if (dladdr(func_address, &info)) { // if (dladdr(func_address, &info) != 0) {
            printf("%s { // Enter\n", (info.dli_sname?info.dli_sname:"<unknown>"));
        }
#if 0
        char cmdS[200]="";
        char funcP[20];
        char callP[20];
//      if (Send_Telnet >= 1) {
        sprintf(funcP, "%x", func_address);
        sprintf(callP, "%x", call_site);
//      sprintf(cmdS, "cat XXX.map | grep %s", funcP);
//      run_command(cmdS, 0);
        printf("%s { //Enter from %s\n", funcP, callP);
//      }
#endif
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
/*
typedef struct {
    const char *dli_fname;  // Pathname of shared object that contains address
    void       *dli_fbase;  // Address at which shared object is loaded
    const char *dli_sname;  // Name of nearest symbol with address lower than addr
    void       *dli_saddr;  // Exact address of symbol named in dli_sname
} Dl_info;
*/
// add "-finstrument-functions" when compiler!!
// gcc -finstrument-functions B_printInfoBeforeFuncAfterFunc.c -o B_printInfoBeforeFuncAfterFunc.o
// gcc -ldl -finstrument-functions B_printInfoBeforeFuncAfterFunc.c -o B_printInfoBeforeFuncAfterFunc.o
// gcc -rdynamic -ldl -finstrument-functions B_printInfoBeforeFuncAfterFunc.c -o B_printInfoBeforeFuncAfterFunc.o

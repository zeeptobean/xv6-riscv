#include "kernel/types.h"
// #include "kernel/stat.h"
#include "user/user.h"

int
strtoi_base10(const char *str, int* ret) {
    int sign = 0;
    const char *ite = str;
    *ret = 0;
    while(*ite != 0) {
        if(*ite == '+') {

        } else if(*ite == '-') {
            sign ^= 1;
        } else if('0' <= *ite && *ite <= '9') {
            *ret = *ret * 10 + (*ite-'0');
        } else {
            return 0;
        }
        ite++;
    }

    *ret *= (-1)*sign;
    return 0;
}

int
main(int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(2, "Usage: sleep <ticks>");
        exit(1);
    }

    int ticks;
    int ret = 0;
    if(strtoi_base10(argv[1], &ticks)) {
        if(ticks <= 0) {
            fprintf(2, "ticks must be positive number");
            exit(1);
        } else {
            ret = sleep(ticks);
            if(ret == -1) {
                fprintf(2, "failed to sleep");
                exit(1);
            } else {
                fprintf(2, "i've just slept wow");
                exit(0);
            }
        }
    } else {
        fprintf(2, "Invalid ticks inputted");
        exit(1);
    }

    //never reach
    exit(0);
    return 0;
}
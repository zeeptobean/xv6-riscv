#include "kernel/types.h"
// #include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    if(argc < 2) {
        fprintf(2, "Usage: sleep <ticks>\n");
        exit(1);
    }

    int ticks = atoi(argv[1]);
    fprintf(2, "[INFO] argv[2]: %s\n", argv[1]);
    fprintf(2, "[INFO] ticks: %d\n", ticks);
    if(ticks <= 0) {
        fprintf(2, "ticks must be positive integer\n");
        exit(1);
    }
    if(sleep(ticks) == -1) {
        fprintf(2, "failed to sleep\n");
        exit(1);
    } else {
        fprintf(2, "i've just slept wow\n");
        exit(0);
    }

    exit(-1);
    return 0;
}
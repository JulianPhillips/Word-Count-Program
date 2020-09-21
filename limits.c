#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit the_lim;
    getrlimit(RLIMIT_STACK, &the_lim);
    unsigned long sLimit, pLimit, dLimit;

    

    getrlimit(RLIMIT_AS, &the_lim);
    pLimit = the_lim.rlim_cur;

    getrlimit(RLIMIT_NOFILE, &the_lim);
    dLimit = the_lim.rlim_cur;

    getrlimit(RLIMIT_STACK, &the_lim);
    sLimit = the_lim.rlim_cur;

    printf("stack size: %lu\n", sLimit);
    printf("process limit: %lu\n", pLimit);
    printf("max file descriptors: %lu\n", dLimit);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <chcore/launcher.h>
#include <chcore/syscall.h>
#include <chcore/ipc.h>
#include <chcore/services.h>
#include <chcore-internal/thread_group_defs.h>
#include <chcore-internal/sd_defs.h>

int main(int argc, char *argv[])
{
        char *argvs[1];
        struct new_process_caps process_cap;

        argvs[0] = "/bcm54213.srv";
        create_process(1, argvs, &process_cap);

        exit(0);
}

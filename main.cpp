#include <LogMaker.h>
#include <stdio.h>

/**
 * This link http://www.cplusplus.com/reference/cstdio/printf/
 * @return
 */


int main(int argc, char *argv[]) {
    printf ("Are you Ready? Let's try produce logs for log rotate test ");
    printf ("Lof file is LogMaker.log");
    LogMaker * logMaker = new LogMaker;
    logMaker->startCrazyLogs();
    printf ("There is a while true, but Let delete the pointer");
    delete logMaker;
}


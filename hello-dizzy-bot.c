#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    char *hello = {"Hi! I'm dizzy bot, your personal greating assistant\nI wish you happy every day :)\n"};
    printf("%s", hello);

    time_t timep;
    time(&timep);
    printf("Now it is %s\n", asctime(gmtime(&timep)));

    return 0;
}

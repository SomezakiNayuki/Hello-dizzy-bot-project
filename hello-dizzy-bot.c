#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void print_hello();
void print_time();

int main(void) {
    print_hello();
    print_time();
     
    return 0;
}

void print_hello() {
    char *print_hello = {"Hi! I'm dizzy bot\nyour personal greating assistant\nI wish you happy every day :)\n\n"};
    printf("%s", print_hello);
}

void print_time() {
    char *wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    time_t time_stamp;
    struct tm *time_pointer;
    int SYD_day_light_saving = 10;

    time(&time_stamp);
    time_pointer =  gmtime(&time_stamp);
    
    printf("Now it is:\n\t%d-%d-%d %s\n", 1900 + time_pointer->tm_year,
                                          time_pointer->tm_mon,
                                          time_pointer->tm_mday,
                                          wday[time_pointer->tm_wday]);

    if (time_pointer->tm_isdst) {
        SYD_day_light_saving++;
    }

    printf("China:\n\t%d:%d:%d\n", 8 + time_pointer->tm_hour,
                                   time_pointer->tm_min,
                                   time_pointer->tm_sec);
    printf("Sydney:\n\t%d:%d:%d\n", SYD_day_light_saving + time_pointer->tm_hour,
                                    time_pointer->tm_min,
                                    time_pointer->tm_sec);

    printf("Due:\n\t%d days %d hours %d mins left\n", 7 - time_pointer->tm_wday,
                                                      20 - (SYD_day_light_saving + time_pointer->tm_hour),
                                                      60 - time_pointer->tm_min);
}
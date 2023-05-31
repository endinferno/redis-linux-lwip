#pragma once

#include <stdio.h>
#include <sys/time.h>
/* 
// 1 for ipc+lwip
#define PERF_TEST1 0
// 2 for lwip
#define PERF_TEST2 0
// 3
#define PERF_TEST3 0
// 4
#define PERF_TEST4 0
// 5
#define PERF_TEST5 0
// 6
#define PERF_TEST6 0
// 7
#define PERF_TEST7 0
// 7
#define PERF_TEST8 0
// 9
#define PERF_TEST9 0
// 10
#define PERF_TEST10 0

int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0;
int time_total1 = 0, time_total2 = 0, time_total3 = 0, time_total4 = 0,
    time_total5 = 0, time_total6 = 0, time_total7 = 0;

int time_cal[180];
int cal[180];

void print_time(struct timeval begin_time, struct timeval end_time, int times,
                int *to_add_total, const char *title)
{
    long splashed_time = 1000000 * (end_time.tv_sec - begin_time.tv_sec) + (end_time.tv_usec - begin_time.tv_usec);
    *to_add_total += splashed_time;
    if (times % 1000 != 0)
    {
        return;
    }
    printf("%s: Number %d, length: %lu us, total length: %d\n",
           title,
           times,
           splashed_time,
           *to_add_total);
}

void print_cal(int times)
{
    int f = 0;
    cal[times]++;
    if (cal[times] % 1 != 0)
    {
        return;
    }

    printf("\n#########################\n");
    for (int i = 0; i < 180; i++)
    {
        if (cal[i] == 0)
        {
            continue;
        }
        printf("%d is %d", i, cal[i]);
        if (f == 0 || f == 1)
        {
            printf("\t");
            f++;
        }
        else
        {
            printf("\n");
            f = 0;
        }
    }
}

void print_time_type(int times, struct timeval begin_time,
                     struct timeval end_time)
{
    long splashed_time = 1000000 * (end_time.tv_sec - begin_time.tv_sec) + (end_time.tv_usec - begin_time.tv_usec);

    time_cal[times] += splashed_time;
    cal[times]++;
    if (cal[times] % 100 != 0)
    {
        return;
    }

    printf("\n#########################\n");
    for (int i = 0; i < 180; i++)
    {
        if (cal[i] == 0 || time_cal[i] < 10000)
        {
            continue;
        }
        printf("%d times: %d, total: %d\n", i, cal[i], time_cal[i]);
    }
} 
 */
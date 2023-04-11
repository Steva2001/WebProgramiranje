#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXN 10
#define MAXA 20

typedef struct
{
    int start;
    int finish;
} ACTIVITY;

//zadatak
void printActivity(ACTIVITY);
void randomActivities(ACTIVITY[], int);
int comp(const void *, const void *);
void printMaxActivities(ACTIVITY[], int);

int main()
{
    ACTIVITY a[MAXN];

    randomActivities(a, MAXN);

    puts("Activities:");
    int i;
    for (i = 0; i < MAXN; i++)
    {
        printActivity(a[i]);
    }

    qsort(a, MAXN, sizeof(ACTIVITY), comp);

    puts("Sorted activities:");
    for (i = 0; i < MAXN; i++)
    {
        printActivity(a[i]);
    }

    printMaxActivities(a, MAXN);

    return 0;
}

void printMaxActivities(ACTIVITY a[], int n)
{
    int i, j;

    printf("Following activities are selected: \n");

    i = 0;
    printActivity(a[i]);

    // TODO : select and print activities
}
//SUDBINA
void randomActivities(ACTIVITY a[], int n)
{
    int i;
    srand(time(0));

    for (i = 0; i < n; i++)
    {
        a[i].start = rand() % (MAXA - 1);
        a[i].finish = a[i].start + 1 + rand() % (MAXA - 1 - a[i].start);
    }
}

int comp(const void *p, const void *q)
{
    // TODO : compare activities
}

void printActivity(ACTIVITY a)
{
    printf("Start: %d, Finish: %d\n", a.start, a.finish);
}


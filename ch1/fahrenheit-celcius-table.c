#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

void forLoopVersion();

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;  // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }

    printf("\n\n");

    forLoopVersion();
}

void forLoopVersion()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}
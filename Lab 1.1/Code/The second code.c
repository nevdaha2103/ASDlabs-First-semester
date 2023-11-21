#include <stdio.h>

int main()
{
    float x, y = 0;

    printf("Enter x: \n");
    scanf("%f", &x);

    if (x <= -41)
    {
        y = 13 * x * x / 11 - 6;
        printf("y = %f", y);
    }
    else if (x > -21 && x <= 3 || (x > 12))
    {
        y = -14 * x - 20;
        printf("y = %f", y);
    }
    else
    {
        printf("no value for x");
    }

    return 0;
}

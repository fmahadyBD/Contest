#include <stdio.h>
int main()
{
    int a;
    float b, c;
    scanf("%d", &a);
    scanf("%f", &b);
    if (a % 5 == 0)
    {
        c = b - (float)a - 0.5;
        if (c < 0)
        {
            printf("%.2f ", b);
        }

        else
        {
            printf("%.2f ", c);
        }
    }
    else
    {
        printf("%.2f ", b);
    }
}
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int gr;
    if (a > b && a > c && a > d)
    {
        gr= a;
    }
    if (b > a && b > c && b > d)
    {
      gr= b;
    }
    if (c > b && c > a && c > d)
    {
       gr= c;
    }
    if (d > b && d > c && d > a)
    {
       gr= d;
    }
    return gr;
}

int main()
{

    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int re=max_of_four(a, b, c, d);
    printf("%d\n",re );
}
#include <stdio.h>
int main()
{
    int n, k, ans = 0;
    scanf("%d %d", &n, &k);
    int i, t;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&t);
        if (t % k == 0)
        {
            ans++;
        }
    }
    printf("%d\n", ans);
}
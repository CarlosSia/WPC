#include<stdio.h>
#define FuckLongNumber 10000

int main()
{
    int Z, I, L, M, Case = 1;
    int num[FuckLongNumber];

    while (scanf("%d%d%d%d", &Z, &I, &M, &L) && M)
    {
        int i, count = 0;
        for (i = 0; i < FuckLongNumber; i++)
            num[i] = 0;

        while (!num[L])
        {
            num[L] = ++count;
            L = (Z*L + I) % M;
        }

        printf("Case %d: %d\n", Case++, count - num[L] + 1);
    }

    return 0;
}
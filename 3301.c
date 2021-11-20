#include <stdio.h>

int main()
{
    int n, i = 0, cnt = 0, arr[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};

    scanf("%d", &n);
    while (n != 0)
    {
        if (n >= arr[i])
        {
            cnt += n / arr[i];
            n = n % arr[i];
        }
        i++;
    }

    printf("%d", cnt);

    return 0;
}
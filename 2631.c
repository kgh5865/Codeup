#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, i, L;
    int cnt = 0, sum;
    int *arr;

    scanf("%d %d", &n, &k);

    arr = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = arr[0];
    L = i = 0;
    while (i < n)
    {
        if (sum == k)
        {
            cnt++;
            sum -= arr[L];
            L++;
        }
        else if (sum < k)
        {
            i++;
            sum += arr[i];
        }
        else if (sum > k)
        {
            sum -= arr[L];
            L++;
        }
    }

    printf("%d", cnt);

    free(arr);

    return 0;
}
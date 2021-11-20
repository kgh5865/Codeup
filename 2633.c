#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, i, ct, right, left;
    int *arr;

    scanf("%d %d", &n, &k);

    arr = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (k > arr[n - 1])
    {
        printf("%d", n + 1);
        return 1;
    }

    left = 0;
    right = n - 1;
    while (left <= right)
    {
        ct = (left + right) / 2;
        if (k < arr[ct]) right = ct - 1;
        else if (k > arr[ct]) left = ct + 1;
        else if (k == arr[ct]) break;
    }

    if (k > arr[ct])
    {
        while (k < arr[ct++]);
    }
    else
    {
        while (ct > 0)
        {
            if (k > arr[ct - 1]) break;
            else ct--;
        }
    }

    printf("%d", ct + 1);

    free(arr);

    return 0;
}
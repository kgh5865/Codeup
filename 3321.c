#include <stdio.h>
#include <stdlib.h>

void quicksort(int *arr, int left, int right)
{
    int L = left, R = right, temp;
    int pivot = arr[(L + R) / 2];

    while (L <= R)
    {
        while (arr[L] > pivot)
            L++;
        while (arr[R] < pivot)
            R--;
        if (L <= R)
        {
            if (L != R)
            {
                temp = arr[L];
                arr[L] = arr[R];
                arr[R] = temp;
            }
            L++;
            R--;
        }
    }
    if (left < R)
        quicksort(arr, left, R);
    if (right > L)
        quicksort(arr, L, right);
}

int main()
{
    int n, a, b, dow, i, temp, sum = 0;
    int *tp;

    scanf("%d%d%d%d", &n, &a, &b, &dow);

    tp = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &tp[i]);
    }

    quicksort(tp, 0, n - 1);

    temp = dow / a;
    for (i = 0; i < n; i++)
    {
        sum += tp[i];
        if (temp < (dow + sum) / (a + b * (i + 1)))
            temp = (dow + sum) / (a + b * (i + 1));
    }

    printf("%d", temp);

    free(tp);

    return 0;
}
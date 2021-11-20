#include <stdio.h>
#include <math.h>

int fuc(int n)
{
    int temp = abs(n - 10);
    if (temp > abs(n - 5)) temp = abs(n - 5);
    if (temp > abs(n - 1)) temp = abs(n - 1);
    return temp;
}

int main()
{
    int a, b, temp, cnt = 0;

    scanf("%d %d", &a, &b);

    if (b < 0) temp = a + abs(b);
    else temp = abs(a - b);

    while (temp != 0)
    {
        temp = fuc(temp);
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}
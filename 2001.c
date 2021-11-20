#include <stdio.h>

int main()
{
    int price[5];
    int i, pasta, juice;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &price[i]);
    }

    pasta = price[0];
    if (pasta > price[1])
        pasta = price[1];
    if (pasta > price[2])
        pasta = price[2];

    juice = price[3];
    if (juice > price[4])
        juice = price[4];

    printf("%.1lf", (pasta + juice)*1.1);

    return 0;
}
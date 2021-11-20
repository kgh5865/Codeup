#include <stdio.h>
#include <stdlib.h>

void quicksort(int *arr,int left,int right)
{
    int L=left,R=right;
    int temp;
    int pivot=arr[(L+R)/2];

    while(L<=R)
    {
        while(arr[L]<pivot) L++;
        while(arr[R]>pivot) R--;
        if(L<=R)
        {
            if(L!=R)
            {
                temp=arr[L];
                arr[L]=arr[R];
                arr[R]=temp;
            }
            L++;
            R--;
        }
    }
    if(left<R) quicksort(arr,left,R);
    if(right>L) quicksort(arr,L,right);
}

void printNum(int *arr,int L,int R,int *num)
{
    int m=(L+R)/2;
    if(L<=R)
    {
        if(*num>arr[m]) printNum(arr,m+1,R,num);
        else if(*num<arr[m]) printNum(arr,L,m-1,num);
        else *num=m;
    }
}

int main()
{
    int *data,*temp;
    int n,i,m;

    scanf("%d",&n);

    data=(int*)malloc(sizeof(int)*n);
    temp=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        data[i]=m;
        temp[i]=m;
    }

    quicksort(data,0,n-1);

    for(i=0;i<n;i++)
    {
        printNum(data,0,n-1,&temp[i]);
        printf("%d ",temp[i]);
    }

    free(data);
    free(temp);

    return 0;
}
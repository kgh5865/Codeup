#include <stdio.h>

int cnt=0;

// void fuc(int n,int t)
// {
//     if(n==0) cnt++;
//     else if(n>=3 && t==0)//앞숫자가 1,2
//     {
//         fuc(n-3,1);
//         fuc(n-2,0);
//         fuc(n-1,0);
//     } 
//     else//앞숫자가 3
//     {
//         if(n-2>=0) fuc(n-2,0);
//         if(n-1>=0) fuc(n-1,0);
//     }
// }

void fuc(int n,int t,int m)
{
    if(n==0)
    {
        cnt++;
    }
    if(n-3>=0 && t==0)//앞숫자가 1,2
    {
        fuc(n-3,1,3);
    } 
    if(n>0)//앞숫자가 3
    {
        if(n-1>=0)
        {
            fuc(n-1,0,1);
        }
        if(n-2>=0)
        {
            fuc(n-2,0,2);
        }
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    fuc(n,0,0);
    printf("%d",cnt);

    return 0;
}
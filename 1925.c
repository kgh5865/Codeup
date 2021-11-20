#include <stdio.h>
#define SWAP(x,y) {int t;t=x;x=y;y=t;}

int fuc(int n, int r)
{
    int res=n;
    if(n==1) return 1;
    if(n==r) return 1;
    else if(n>1) return res=n*fuc(n-1,r);
    return res;
}

int main()
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    x=a-b;
    y=b;
    if(x<y) SWAP(x,y);

    printf("%d",fuc(a,x)/fuc(y,1));

    return 0;
}
//28 1
//28
//22 16  74613
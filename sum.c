#include <stdio.h>

int main()
{
    int s,n,a,d,sum;
    scanf("%d%d%d",&n,&a,&d);
    s=n*(2*a+(n-1)*d);
    sum=s/2;
    printf("%d",sum);
    return 0;
}

#include <stdio.h>

int main()
{
    int l,b,h,sa,v;
    scanf("%d %d %d",&l,&b,&h);
    sa=2*(l*b+b*h+h*l);
    v=l*b*h;
    printf("%d %d",sa,v);
    
}

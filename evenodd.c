
#include <stdio.h>

int main()
{
    int c ;
    scanf("%d",&c);
    if(c<0)
    {
        printf("Invalid");
        
    }
    else if(c%2==0){
        printf("Even");
        
    }
    else{
        printf("Odd");
    }

    return 0;
}

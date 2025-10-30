#include<stdio.h>
#define const 60
int main()
{
    int n;
    
    scanf("%d",&n);
    int hour=0;
    while(n>59)
    {
         hour++;
         n-=const;
    }
   
    printf("%d:%d",hour,n);
    return 0;
    

}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int weeks=0;
    while(n>6)
    {
      weeks++;
      n-=7;
    }
    printf("%d %d",weeks,n);
}
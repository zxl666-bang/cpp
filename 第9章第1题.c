#include<stdio.h>
int min(int a,int b);
int main()
{
    int n;
    int m;
    scanf("%d %d",&n,&m);
    printf("%d",min(n,m));
    return 0;
}
int min(int a,int b)
{
   if(a<b)
   {
    return a;
   }
   else{
    return b;
   }
}
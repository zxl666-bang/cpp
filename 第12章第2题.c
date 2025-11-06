#include<stdio.h>
int A(int *a)
{
    int n;
   scanf("%d",&n);
   a[0]=n;
   return a;
}
int main()
{
    int*b;
    printf("%d",A(b));
    return 0;
}
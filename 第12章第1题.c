#include<stdio.h>
int a=0;
int A(int n)
{
    scanf("%d",&n);
    
    while(n>0)
    {
        n--;
       a++;
    }
    return a;
}
int main()
{
    int q;
    printf("%d",A(q));
    return 0;
}
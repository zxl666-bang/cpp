#include<stdio.h>
int main()
{
    int a[1000];
    int min=a[0];
    int n=1;
    while((a[n++]=gtechar())!=EOF)
    {
        if(a[n]<min)
        {
            min=a[n];
        }
    }
    printf("%d",min);
    return 0;
}
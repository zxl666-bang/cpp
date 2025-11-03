#include<stdio.h>
int main()
{
    int a[1000];
    int n=0;
    a[n++]=getchar();
    int min=a[0];
    int b=0;
    while((a[n++]=getchar())!=EOF)
    {
        if(a[n]<min)
        {
             b=n;
        }
    }
    printf("%d",b

    );
    return 0;
}
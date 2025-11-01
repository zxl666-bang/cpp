#include<stdio.h>
int main()
{
    int ch;
    int a=0;
    int b=0;
    int m=0;
    int n=0;
    scanf("%d",&ch);
    while(ch!=0)
    {
        
            if(ch%2==0)
            {
                a+=ch;
                m++;
            }
            else{
                b+=ch;
                n++;
            }
            scanf("%d",&ch);

      
    }
    double q=0.0;
    double w=0.0;
    if(m!=0)
    {
        q=(double)a/m;
    }
    if(n!=0)
    {
        w=(double)b/n;
    }
    printf("%lf %lf",q,w);
    return 0;
}
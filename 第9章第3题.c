#include<stdio.h>
void A(char,int,int);
int main()
{
    char k;
    int a,b;
    scanf("%c %d %d",&k,&a,&b);
    A(k,a,b);
    return 0;
}
void A(char ch,int i,int j)
{
    int e=i/j;
    for(int n=0;n<i;n++)
    {
        for(int m=0;m<e;m++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
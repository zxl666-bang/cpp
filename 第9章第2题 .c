#include<stdio.h>
void A(char,int,int);
int main()
{    char ch;
    int i,j;
    scanf("%c %d %d",&ch,&i,&j);
    A(ch,i,j);
    return 0;
}
void A(char e,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%c",e);
        }
        printf("\n");
    }
    
}
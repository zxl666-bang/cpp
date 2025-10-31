#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<5;i++)
    {    char a=ch;
        for(int j=0;j<i+1;j++)
        {
            printf("%c",a--);
        }
        printf("\n");
    }
}
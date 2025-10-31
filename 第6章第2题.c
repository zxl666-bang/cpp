#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
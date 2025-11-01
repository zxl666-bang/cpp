#include<stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!=EOF)
    {
        if(ch=='\n')
        {
            printf("\\n");
        }
        else if(ch=='\t')
        {
            printf("\\t");
        }
        printf("%d ",ch);
        while(getchar()!='\n')
        continue;
        
        
    }
    return 0;
}
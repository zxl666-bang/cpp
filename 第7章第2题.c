#include<stdio.h>
int main()
{
    
    char ch;
    int i=1;
    while((ch=getchar())!='#')
    {
        
        
        printf("%c-%d",ch,ch);
        i++;
        if(i%8==0)
        {
            printf("\n");
        }
    }
    return 0;
    
}
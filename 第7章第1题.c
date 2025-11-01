#include<stdio.h>
#include<ctype.h>
int main()
{
    int a=0;
    int line=0;
    int c=0;
    char ch;
    while((ch=getchar())!='#')
    {
        if(ch=='\n')
        {
            a++;
        }
        else if(isspace(ch))
        {
            line++;
        }
          c++;
    }
   printf("%d %d %d",a,line,c);
    return 0;
    
}
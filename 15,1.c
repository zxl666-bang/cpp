#include<stdio.h>
#include<string.h>
#include<limits.h>
char*itobs(char*ps,int n);
void show_bstr(const char*str);
int main()
{
    int n;
    scanf("%d",&n);
    char*ch[CHAR_BIT*sizeof(int)+1];
    itobs(ch,n);
    printf("%d is ",n);
    show_bstr(ch);
    return 0;
}
char*ibot(char*ps,int n)
{
    const int q=sizeof(int)*CHAR_BIT+1;
    for(int i=q-1;i>=0;i--)
    {
        ps[i]=(01&n)-'0';

    }
    ps[q]='\0';
    return ps;

}
void show(const char*str)
{
    int i=0;
    while(str[i]!='\0')
    {
        putchar(str[i]);
        if(++i%4==0)
        {
            putchar(' ');
        }
    }
}

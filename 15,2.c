#include<stdio.h>
#include<string.h>
#include<limits.h>
char*ibots(char*ps,int n);
void show(char*str);
int fan(int n,int m);
int main()
{
    int n;
    int bits=3;
    char ch[CHAR_BIT*sizeof(int)+1];
    while(scanf("%d",&n)==1)
    {
      ibots(ch,n);
      printf("%d is",n);
      show(ch);
      printf("\n");
      n=fan(n,bits);
      show(ibot(ch,n));
      printf("\n");

    }
    return 0;
}
char*ibots(char*ps,int n)
{
    const int size=CHAR_BIT*sizeof(int)+1;
    for(int i=size-1;i>=0;i--)
    {
        ps[i]=(01&n)+'0';
    }
    ps[size]='\0';
    return ps;
}
void show(char*str)
{
    int i=0;
    int size=CHAR_BIT*sizeof(int)+1;
   while(i<size)
   {
    putchar(str[i]);
    if(++i%4==0)
    {
        printf(" ");
    }
   }
}
int fan(int n,int bits)
{
    int b=1;
    int m=0;
    while(bits--)
    {
        m|=b;
        b<<1;
    }
    return n^m;
}
#include<stdio.h>
void A(int*a,int*b,int c)
{
    for(int i=0;i<c;i++)
    {
        b[i]=a[i];
    printf("%d",b[i]);

    }

}
void B(int*a,int*b,int c)
{
    int n=0;
    while(n<c)
   {b[n++]=a++;}
}
void C(int*a,int *b,int *c)
{
    int n=0;
  while(1)
  {
    if(a[n]==c)
    {
        break;
    }
    else{b[n++]=a[n++];}
    
  }
}
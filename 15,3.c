#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int ibots(char*ps,int n);
int main()
{
    char ch[100];
    int a=0;
    printf("%d",ibots(ch,a));
    return 0;

}
int ibots(char*ps,int n)
{
    int i=0;
    int sum=0;
    int A[100];
    while(scanf("%s",ps[i++])==1)
    continue;
     sum=atoi(ps);
    while(sum>0)
    {
     A[i--]=sum%10;
    }
    for(int q=0;q<i;q++)
    {
        if(A[q]==1)
        n+=(int)pow(2,q);
    }
return n;
}
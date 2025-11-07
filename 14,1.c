#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 100;
struct book
{
    char name[100];
    char zuo[100];
    int value;
};
char *s_gets(char*p,int n);
int main()
{
    struct book library[100];
    int count=0;
    int size=sizeof(struct book);
    FILE*fp;
    if((fp=fopen("book.data","a+"))==NULL)
    {
        exit(EXIT_FAILURE);
    }
   while(count<100&&fread(&library[count],size,1,fp)==1)
   {
    if(count==0)
    {
        printf("Please enter:\n");
    }
    s_gets(library[count].name,100);
    s_gets(library[count].zuo,100);
    scanf("%d",&library[count++].value);
   }
   fputs("full!",stdout);
   while(count>=0)
   {
      printf("%s %s %d\n",library[count].name,library[count].zuo,library[count].value);
      count++;
   }
    printf("Over!\n");
}
char *s_gets(char*p,int n)
{
    char *red_val;
    char *find;
    red_val=fgets(p,n,stdin);
   if(red_val)
   {
     find=strchr(p,'\n');
     if(find)
     {
        *find='\0';
     }
     else
     {
       while(getchar()!='\n')
       continue;
     }
   }

   return red_val;
   

}
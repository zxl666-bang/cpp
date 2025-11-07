#include<stdio.h>
#include<stdbool.h>
#include<string.h>
char*s_get(char*st,int n);
enum colors{red,yellow,green};
const char*A[]={"red","yellow","green"};
int main()
{
   char choice[100];
   int len=100;
   enum colors color;
  bool find=false;
  while((s_get(choice,100))!=NULL)
  {
     for(color=red;color<=green;color++)
     {
        if(strcmp(choice,A[color])==0)
        {
          find=true;
          break;
        }
     }
  
    if(find)
    {
    switch(color)
    {
       case red:
       printf("red\n");
       break;
       case yellow:
       printf("yellow\n");
       break;
       case green:
       printf("green\n");
       break;
    }
    }
    else
    {
        printf("no\n");
        find=false;
    }
    return 0;
  }


}
char*s_get(char*st,int n)
{
    char*red_val;
    char*find;
   red_val=fgets(st,n,stdin);
   if(red_val)
   {
    find=strchr(st,'\n');
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
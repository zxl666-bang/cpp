#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
char*s_gets(char*,int);
enum moth{yi,er,san,si};
char*A={"yi","er","san","si"};
bool q=false;
int main()
{
    enum moth yue;
    char*B[12];
   
    while(s_get(B,12)!=NULL&&B[0]!='\n')
    {for(int yue=yi;yue<=si;yue++)
    {
        if(strcmp(B,A[yue])==0)
        {
            q=true;
        }
    }
    if(q)
    {
        switch(yue)
       {case yi:
        printf("1yue\n");
        break;
        case er:
        printf("2yue\n");
        break;
        case san:
        printf("3yue\n");
        break;
        case si:
        printf("4yue\n");
        break;
       }

    }
    else 
     {
        printf("afte 4 yue\n");
        q=false;

     }

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
    {
        if(find)
        *find='\0';
        else
        {
            while(getchar()!='\n')
            continue;
        }
    }
   }
   return red_val;
}
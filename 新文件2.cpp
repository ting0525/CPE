#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
int main()
{
 char x[101][101],y[101];    
 int a,b,time=0,max=0;    
 while(gets(y)!=0)
  {
  if(y=='\0') break;
  else
   {
   for(a=0;a<101;a++)
    {
     if(a<strlen(y))
     x[time][a]=y[a];
     else
     x[time][a]=' ';
    }
    time++;
   if(strlen(y)>max) max=strlen(y);
   }
  }  
  for(a=0;a<max;a++)
   {
   for(b=time-1;b>=0;b--)
    printf("%c",x[b][a]);
    printf("\n");
   }
 return 0;    
}

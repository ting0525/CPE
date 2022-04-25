#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[1000][1000];
    int count = 0,len=0,i,j;
    while(gets(str[count])!=NULL)
    {
        if(strlen(str[count])>len)
            len=strlen(str[count]);
        count++;
    }
    for(i=0;i<len;i++)
    {
       
        for(j=count-1;j>=0;j--)
        {
            if(i>=strlen(str[j]))
                printf(" ");
            else
                printf("%c",str[j][i]);
        }
        printf("\n");
    }
    return 0;
}

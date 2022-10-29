#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char n[1010];
int ans[6] = {76,16,56,96,36};
int main()
{
    int testcase,i,res,len;
    scanf("%d\n",&testcase);
    while(testcase--)
    {
        memset(n,0,sizeof(n));
        cin>>n;
        len = strlen(n);
        res = n[0] - '0';
        if(len == 1)
        {
            if(res == 0) printf("1\n");
            else if(res == 1) printf("66\n");
            else printf("%d\n",ans[res%5]);
        }
        else{
            res = n[len-1] - '0';
            res %= 5;
            printf("%d\n",ans[res]);
        }
    }
    return 0;
}
/*§ä¥X³W«ß
  n = 0  1  2  3  4  5  6  7  8   9  10  11  12  13  14
mod = 1 66 56 96 36 76 16 56 96  36  76  16  56  96  36
³W«ß       ** ** ** ** ** .. ..  ..  ..  ..  ~~  ~~  ~~
*/ 

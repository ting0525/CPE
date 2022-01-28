#include<stdio.h>
int main(){
	int a[1001] = {0};
    int x=1000;

    a[0] = 1;             // 
    a[1] = 1;
    for(i=2;i<=1000;i++){
        for(j=i*2;j<=1000;j+=i){
            if(!a[j]) 
				a[j]++;
        }
    }
    while(1){                      //
        if(!a[x]){
            printf("%d\n", x);
            break;
        }
        x--;
    }

	return 0;
}

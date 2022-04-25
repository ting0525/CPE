#include<stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int sum;
    int n;
    while(scanf("%d", &n)){
        if(n==0){
            break;
        }
        else{
            sum=0;
            for(int i=1;i<n;i++){
                for(int j=i+1;j<=n;j++){
                    sum=sum+gcd(i,j);
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}

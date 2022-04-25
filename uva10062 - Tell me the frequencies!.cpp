#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int length,max=0,x=0,i=0;
	int frequency[256];
	char str[10000],c;
	while(gets(str)!=NULL){
		for(int i=0;i<256;i++){  //清空統計數量 
			frequency[i]=0;
		}
		
		length=strlen(str);     //字串長度 
		
		for(int i=0;i<length;i++){     
			frequency[str[i]]++;   
		}
		
		max=0;                       //找出最大頻率 
		for(int i=0;i<=127;i++){     
			if(frequency[i]>max)
				max=frequency[i];
		}
		x++;                 //第二筆資料後要換行 
		if(x>1)
			printf("\n");
		
		for(int i=1;i<=max;i++){    //頻率由小到大排列 
			for(c=127;c>=1;c--){    //頻率相同的 依照ASCII碼由小到大輸出 
				if(frequency[c]==i)
					printf("%d %d\n" , c , frequency[c]);
			}
		}
	}
	return 0;
} 









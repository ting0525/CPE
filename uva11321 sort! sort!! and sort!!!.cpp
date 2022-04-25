#include <iostream>
using namespace std;
int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int n,m,i,j;
	while(cin>>n>>m){
		if(n==0&&m==0){//程挡Ю块ㄢ箂 		
			cout<<"0 0"<<endl;
			break;
		}
		else{
			cout<<n<<" "<<m<<endl;//块
		}
		 
		int num[n]={0};//иノ蝴皚
		
		for(i =0;i<n;i++){//块 
			cin>>num[i];
		}
		
		for(i=0;i<n;i++){//蹦ノㄢㄢゑ耕よ猭 
			for(j=0;j<n-i-1;j++){
				if(num[j]%m>num[j+1]%m){//璝緇计ゑ緇计碞ユ传 
					swap(&num[j],&num[j+1]);	
				}
				
				else if(num[j]%m==num[j+1]%m){//璝緇计妓碞ゑ耕セ计 
					if(num[j+1]%2!=0&&num[j]%2==0){//计案计薄猵 案计玡璶ユ传 
						swap(&num[j],&num[j+1]);
					}
					else if(num[j]%2!=0&&num[j+1]%2!=0){//ㄢ计 
						if(num[j]<num[j+1]){//玡ゑ耕ユ传 
							swap(&num[j],&num[j+1]);
						}
					}
					else if(num[j]%2==0&&num[j+1]%2==0){//ㄢ案计 
						if(num[j]>num[j+1]){//ゑ耕ユ传 
							swap(&num[j],&num[j+1]);
						}
					}
				}
			}
		}
		
		for(i=0;i<n;i++){//块 
			cout<<num[i]<<endl;
		}	
	}	
	
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int num[10000];
	int n,i=0,length=0,median=0;
	while(cin>>n){
		num[i++]=n;
		length++;
		sort(num,num+length);      //�����δ��J����k �u�ݭn�C����J�ƫ᭫�s��array���ƧǦn 
		if(length==1)             //���׬�1�N��X���Ӽ� 
			cout<<num[0]<<endl;
		else{
			if(length%2==0){     //�p�G���׬����ƨ��N��X������Ӫ����� 
				median=(num[(length-1)/2]+num[length/2])/2;
			}
			else{               //�p�G���׬��_�ƴN��Xarray�������� 
				median=num[length/2];  
			}
			cout<<median<<endl;
		}
	}
} 

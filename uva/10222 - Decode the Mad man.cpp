#include <iostream>
#include <string>
using namespace std;
int main()
{
	string cs1="`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./"; 
	string is1;
	while(getline(cin,is1))//��J
	{
		
		for(int i=0;i<is1.length();i++)//�}�l�@�Ӥ@�Ӥ�� 
		{
			if(is1[i]>='A'&&is1[i]<='Z')//���j�g�����p�g 
			{
				is1[i]=is1[i]+32;
			}
			
			for(int t=0;t<cs1.length();t++)//�v�@���cs1 
			{
				if(is1[i]==cs1[0])//�ť��䤣���ഫ 
				{
					cout<<" ";
					break;
				}
				
				else if(is1[i]==cs1[t])//��X��������L���r 
				{
					cout<<cs1[t-2];
					break;
				}
			}
		}
		cout<<endl;//���� 
	}
	return 0;
}

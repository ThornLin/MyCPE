#include <iostream>
using namespace std;

int main()
{
	int t,a,b,s,d;
	cin>>t;//��J����ƶq 
	while(t--)
	{
		cin>>s>>d;//��J�ⶤ���ƪ��M�P�t 
		
		a=(s+d)/2;//���p�߱o�X�ⶤ���� 
		b=(s-d)/2;
		
		if((a+b==s&&a-b==d)&&b>=0)//���P�P�_b�O�_�����ƨåB��X 
		{						  //�u�ˬdb�O�]���t������ȩҥHa�@�w�|����j 
			cout<<a<<" "<<b<<endl;
		}
		else
		{
			cout<<"impossible"<<endl;
		}
	}
	
}
 

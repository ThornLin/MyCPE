#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n,m,i;
	
	while(cin>>n>>m)//��J����
	{
		long long cn1=m;//m����ʡA�Υt�@���ܼƭp�� 
		
		for(i=1;cn1<n&&m>1;i++)//�p��n�O�_��m������� 
		{
			cn1=pow(m,i);
		}
		
		if(cn1>n||m<=1)//���O����� 
		{
			cout<<"Boring!"<<endl;
		}
		else
		{
			while(cn1>0)//�qn�}�l��Xm����� 
			{
				cout<<cn1;
				if(cn1!=1)//�̫ᤣ�Ϊť� 
				{
					cout<<" ";
				} 
				else//��X��1���� 
				{
					cout<<endl;
				}
				cn1/=m;
			}
		}
	}
	return 0;
}
 

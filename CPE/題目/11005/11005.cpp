#include <iostream>
using namespace std;

int main()
{
	int in1,c=1,i,n,in2,cn1,re,cost[36];
	
	cin>>in1;//��J����ռ� 
	while(c<=in1)
	{
		cout<<"Case "<<c<<":"<<endl;//��X�ĴX�� 
		
		for(i=0;i<36;i++)//��J��O 
		{
			cin>>cost[i];
		}
		
		cin>>n;//��J�Ʀr�ƶq 
		while(n--)
		{
			cin>>in2;//��J�Ʀr 
			
			int min=0,de[37]={0};//�k�s 
			
			for(i=2;i<=36;i++)//�p��C�Ӷi�쪺���� 
			{
				cn1=in2;//�쥻���Ʀr����ʩҥH�Ψ�L�ܼ� 
				int sum=0;//�k�s 
				
				while(cn1>0)//�Q�εu���k�N�Q�i���ন����i�� 
				{			
					re=cn1%i;//���o�l�ƴN�O�Ӷi��n�઺�Ʀr 
					sum=sum+cost[re];//�p����� 
					cn1=cn1/i;
				}
				
				if(min==0||sum<=min)//�����̤֪���O 
				{
					de[i]=sum;
					min=sum;
				}
			}
			
			cout<<"Cheapest base(s) for number "<<in2<<":";//��X 
			
			for(i=2;i<=36;i++)
			{
				if(de[i]==min)//��X��O�̤֪��i�� 
				{
					cout<<" "<<i;
				}
			}
			cout<<endl;
		}
		
		if(c<in1)//�̫�@�մ��ꤣ�δ��� 
		{
			cout<<endl;
		}
		c++;
	}
	return 0;
}

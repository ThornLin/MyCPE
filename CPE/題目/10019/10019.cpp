#include <iostream>
using namespace std;

int main()
{
	int n,in1,cn1;
	
	cin>>n;//��J����ƶq 
	while(n--) 
	{
		int b1=0,b2=0;
		cin>>in1;//��J����
		cn1=in1;
		
		while(cn1>0)//�Q�i����G�i�� 
		{
			if(cn1%2==1)//�Q�εu���k 
			{
				b1=b1+1;//�p�⦳�X��1 
			}
			cn1=cn1/2;
		}
		
		cn1=in1;
		while(cn1>0)//�Q���i����G�i�� 
		{			//�Q��1�Ӧ����4�Ӧ�ƪ���k 
			int temp=cn1%10;//�����̥k�䪺��� 
			while(temp>0)//�A�Q��10�i����2�i�쪺��k 
			{			 
				if(temp%2==1)
				{
					b2=b2+1;
				}
				
				temp=temp/2;
			}
			cn1=cn1/10;
			
		}
		
		cout<<b1<<" "<<b2<<endl;//��X 
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int in1;
	while(cin>>in1)
	{
		int sum=0;//sum�������X��1 
		string cs1="";//cs1�ন2�i�쪺�� 
		
		if(in1==0)//��J0�N���� 
		{
			break;
		}
		
		while(in1>0)//10�i���ন2�i�� 
		{			//�εu���k�@����2 
			if(in1%2==1)//�l1 
			{
				cs1="1"+cs1;//�n�q�u���k�̫᪺1�g�^�h 
				sum=sum+1;//�p�⦳�X��1 
			}
			
			else//�l0 
			{
				cs1="0"+cs1;
			}
			
			in1=in1/2;
		}
		
		cout<<"The parity of "<<cs1<<" is "<<sum<<" (mod 2)."<<endl;//��X 
	}
	return 0;
}

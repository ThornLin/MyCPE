#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i,t,n;
	
	while(cin>>n)//��J���� 
	{
		int num[n]={0},ans1,ans2=0,ans3;
		for(i=0;i<n;i++)//��J����
		{
			cin>>num[i]; 
		}
		
		sort(num,num+n);//�ƦC 
		
		for(i=0;i<n;i++)
		{
			if(n%2)//���_�ƭӼƦr 
			{
				ans1=num[(n-1)/2];//��줤��� 
				ans3=1;//�u���@�ӼƲŦX���� 
				if(num[(n-1)/2]==num[i])//���J�򤤦�Ƥ@�˪����X�� 
				{
					ans2++;
				}
			}
			
			else//�����ƭӼƦr 
			{
				ans1=num[n/2-1];//��줤���ⶵ���p���� 
				ans3=num[n/2]-num[n/2-1]+1;//��X�ŦX���������X�Ӽ� 
				if(num[n/2-1]==num[i])//���J�򤤶��ⶵ�@�˪����X��
				{
					ans2++;
				}
				else if(num[n/2]==num[i])
				{
					ans2++;
				}
			}
		}
		
		cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;//��X 
	}
    return 0;
}

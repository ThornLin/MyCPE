#include <iostream>
using namespace std;
 
int main()
{
    int i,n,p,t,j;
     
    cin>>t;//��J����ƶq 
    while(t--) 
    {
        cin>>n>>p;//��J�ѼƩM�Ҽ� 
        int day[n+1]={0},hi=0,h[p]={0};
        
        for(i=0;i<p;i++)
        {
        	cin>>h[i];//��J�}�|�Ѽ� 
        	int fr=6,sa=7;//�P�����M���n�� 
        	
        	for(j=1;j<n+1;j++)//�q�Ĥ@�Ѷ}�l�P�_�O�_�}�| 
        	{
        		if(j%h[i]==0&&((j!=fr)&&(j!=sa)))//�P�_�O�_�}�| 
        		{
        			day[j]++;
				}
				
				else if(j==fr)//��U§�����O�ĴX�� 
				{
					fr=fr+7;
				}
				
				else if(j==sa)//��U§�����O�ĴX�� 
				{
					sa=sa+7;
				}
			}
		}
		
        for(i=1;i<n+1;i++)
        {
        	if(day[i]>0)//�p�G���Ѧ��}�|�N��@�� 
        	{
        		hi++;
			}
		}
		
        cout<<hi<<endl;//��X�̲׽}�|�X�� 
    }
    return 0;
}


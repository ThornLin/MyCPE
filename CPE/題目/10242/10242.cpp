#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,t;
	double x[4],y[4],ax,ay;
	
	while(cin>>x[0]>>y[0])//��J���� 
	{
		ax=x[0];//�������I�ۥ[ 
		ay=y[0];//�������I�ۥ[ 
		
		for(i=1;i<4;i++)//��J����
		{
			cin>>x[i]>>y[i]; 
			ax+=x[i];//�����I�ۥ[ 
			ay+=y[i];//�����I�ۥ[ 
		}
		
		for(i=0;i<4;i++)
		{
			for(t=i+1;t<4;t++)
			{
				if(x[i]==x[t]&&y[i]==y[t])//���@�˪��I 
				{
					cout<<fixed<<setprecision(3);//��T��p���I�U�T�� 
					cout<<ax-3*x[i]<<" ";//��Xx�y�� 
					cout<<ay-3*y[i]<<endl;//��Xy�y�� 
				}
			}
		}
	}
    return 0;
}

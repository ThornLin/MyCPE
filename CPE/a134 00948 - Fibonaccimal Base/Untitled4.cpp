//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=889

#include<iostream>
using namespace std;
int main() {
  int f[40] = {0, 1}; //�ŧi�@�� integer �}�C f ���׬� 40, �ý�� 0,1 ���e���
  for(int k = 2; k < 40; k++) //�� for �j��q�� 3 ��N�� k ��ȳ]���e���ۥ[����}�C��
    f[k] = f[k - 1] + f[k - 2];
  int n;
  cin >> n; //��J�@�� integer n ������ƶq 
  while(n--) { //�� n-1 ���O 0 ,�N�i�� while �j�� 
    int m;
    cin >> m; //��J�@�� integer m ������
    cout << m << " = "; //��X"m = "���榡�ݨD
    bool preone = false; //�ŧi�@�� bool preone �õ� false ����
  	for(int k = 39; k >= 2; k--) { //�� for �j��q f �}�C�A�̫��}�l���
	    if(m >= f[k]){ //�p�G����j�� f �}�C�� k ��A�N��J���Ʀr��h�O��ƦC���ơA�ÿ�X 1 ���Ĥ@�� 1 �A����~�i�H��X 0�A�ҥH�Npreone�]�� true
	     	cout << "1"; 
	     	m -= f[k]; 
	     	preone = true; 
	    	}
	    else if(preone) { 
	    	cout << "0";
	    	}
	   	}
	cout << " (fib)" << endl; //��X" (fib)"���榡�ݨD
	}
 	return 0;
}

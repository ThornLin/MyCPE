#include <iostream>
//#include <cstring>
using namespace std;
 
int main() {
    int T, N, P, h; // T=>����X�� N=>�h�֤Ѥ� P=>�C���h�ֵ���� h=>���X�ѽ}�u 
    cin >> T;
    while (T--){
        cin >> N >> P;
        int a[N+1];
        //memset(a, 0, sizeof(a)); // initialization array
        for(int i = 0; i < N+1; i++) // initialization array
        {
        	a[i] = 0;
		}
        for (int i = 0; i < P; i++){ // ��J�}�u�ɶ� 
            cin >> h;
            for (int j = h; j <= N; j+=h){ 
                a[j] = 1;
            }
        }
        for (int i = 6; i <= N; i+=7){ // ��J����ɶ� 
            a[i] = 0;
        }
        for (int i = 7; i <= N; i+=7){ // ��J����ɶ� 
            a[i] = 0;
        }
        int sum = 0;
        for (int i = 1; i <= N; i++){
            sum += a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}

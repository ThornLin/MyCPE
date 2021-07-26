#include <iostream>
//#include <cstring>
using namespace std;
 
int main() {
    int T, N, P, h; // T=>執行幾次 N=>多少天內 P=>每次多少筆資料 h=>哪幾天罷工 
    cin >> T;
    while (T--){
        cin >> N >> P;
        int a[N+1];
        //memset(a, 0, sizeof(a)); // initialization array
        for(int i = 0; i < N+1; i++) // initialization array
        {
        	a[i] = 0;
		}
        for (int i = 0; i < P; i++){ // 輸入罷工時間 
            cin >> h;
            for (int j = h; j <= N; j+=h){ 
                a[j] = 1;
            }
        }
        for (int i = 6; i <= N; i+=7){ // 輸入假日時間 
            a[i] = 0;
        }
        for (int i = 7; i <= N; i+=7){ // 輸入假日時間 
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

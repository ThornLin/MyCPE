#include <iostream>
using namespace std;
 
int main() {
    int i, j;
    while (cin >> i >> j){
        int mx = 0;
        for (int n = min(i, j); n <= max(i, j); n++){
            int n1 = n, cnt = 1;
            while (n1 != 1){
                if (n1 % 2) n1 = 3 * n1 + 1;
                else n1 /= 2;
                cnt++;
            }
            mx = max(mx, cnt);
        }
        cout << i << " " << j << " " << mx << "\n";
    }
    return 0;
}

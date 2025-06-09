// Bai 5.7 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    int n_55;
    cin >> n_55;
    int ans_55 = 0, sum_55 = 0;
    while (n_55--) {
        int k_55, t_55;
        cin >> k_55 >> t_55;
        while (k_55--) {
            int a_55;
            cin >> a_55;
            sum_55 += t_55 * a_55;
            ans_55 = max(ans_55, -sum_55);
        }
    }
    cout << ans_55;
    return 0;
}

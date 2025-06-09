// Bai 5.5 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    int n_55;
    cin >> n_55;
    bool found_55 = false;
    int a_55[n_55];
    for (int i_55 = 0; i_55 < n_55; ++i_55) {
        
        cin >> a_55[i_55]; 
        if ((a_55[i_55] % 4 == 0 && a_55[i_55] % 100 != 0) || (a_55[i_55] % 400 == 0)) {
            found_55 = true;
        }
    }
    if (found_55)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}


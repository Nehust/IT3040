// Bài 3.9 - Phạm Ngọc Tuyên - 20235455
#include<bits/stdc++.h>
using namespace std;
int n_55, k1_55, k2_55, a_55[1005];

// in
void print() {
    for (int i_55 = 1; i_55 <= n_55; i_55++)
        cout << a_55[i_55];
    cout << '\n';
}

// đệ quy 
void dq(int x_55, int len_55) {
    if (len_55 > n_55) return;
    if (len_55 == n_55) print();
    if (x_55 == 0) {
        for (int j_55 = 1; j_55 < k1_55; j_55++)
            a_55[len_55 + j_55] = 1;
        for (int i_55 = k1_55; i_55 <= k2_55; i_55++) {
            a_55[len_55 + i_55] = 1;
            dq(1, len_55 + i_55);
        }
    }
    else {
        a_55[len_55 + 1] = 0;
        dq(0, len_55 + 1);
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";

    cin >> n_55 >> k1_55 >> k2_55;
    dq(1, 0);
    dq(0, 0);
    return 0;
}
// Bài 3.9 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab3


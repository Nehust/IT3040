// Bài 3.11 - Phạm Ngọc Tuyên - 20235455
#include <bits/stdc++.h>
using namespace std;

const int inf_55 = (int)1e9 + 123;

int n_55, r_55;
int w_55[25][25];
string route_55[10];

int k_55, v_55[25], cmin_55;
bool vis_55[25];

int res_55, len_55 = 0;
void gen_55(int t_55, int p_55) {
    if (t_55 == k_55 - 1) {
        if (w_55[p_55][v_55[k_55]] != 0 && len_55 + w_55[p_55][v_55[k_55]] < res_55)
            res_55 = len_55 + w_55[p_55][v_55[k_55]];
        return;
    }
    // Tìm kiếm các đỉnh chưa được thăm
    for (int i_55 = 2; i_55 < k_55; ++i_55)
        if (!vis_55[i_55] && w_55[p_55][v_55[i_55]] != 0) {
            int tryLen_55 = len_55 + w_55[p_55][v_55[i_55]];
            if (tryLen_55 + cmin_55 * (k_55 - t_55 - 1) < res_55) {
                vis_55[i_55] = true;
                len_55 = tryLen_55;
                gen_55(t_55 + 1, v_55[i_55]);
                vis_55[i_55] = false;
                len_55 -= w_55[p_55][v_55[i_55]];
            }
        }
}

int main() {
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";

    cin >> n_55 >> r_55;
    for (int i_55 = 1; i_55 <= n_55; ++i_55)
        for (int j_55 = 1; j_55 <= n_55; ++j_55)
            cin >> w_55[i_55][j_55];

    while (cin.get() != '\n');
    for (int i_55 = 1; i_55 <= r_55; ++i_55) {
        getline(cin, route_55[i_55]);
    }
    // Bỏ qua dòng trống đầu tiên
    for (int t_55 = 1; t_55 <= r_55; ++t_55) {
        stringstream ss_55(route_55[t_55]);
        k_55 = 0;
        for (int val_55; ss_55 >> val_55;) v_55[++k_55] = val_55;

        cmin_55 = inf_55;
        for (int i_55 = 1; i_55 <= k_55; ++i_55)
            for (int j_55 = 1; j_55 <= k_55; ++j_55)
                if (w_55[v_55[i_55]][v_55[j_55]] != 0 && cmin_55 > w_55[v_55[i_55]][v_55[j_55]])
                    cmin_55 = w_55[v_55[i_55]][v_55[j_55]];

        res_55 = inf_55;
        gen_55(1, v_55[1]);
        if (res_55 == inf_55) cout << 0;
        else cout << res_55;
        cout << '\n';
    }
    return 0;
}

// Bài 3.11 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab3

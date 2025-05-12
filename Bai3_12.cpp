// Bài 3.12 - Phạm Ngọc Tuyên - 20235455
#include <bits/stdc++.h>
using namespace std;

int n_55, m_55, k_55;
int w_55[35][35];
int tr_55[35];
bool vis_55[35];

int res_55 = 0;

// Đếm số cách chọn k_55 đỉnh từ n_55 đỉnh sao cho không có cạnh nào giữa các đỉnh đã chọn
void gen_55(int t_55, int p_55) {
    if (t_55 > k_55 + 1) {
        ++res_55;
        return;
    }

    for (int i_55 = 1; i_55 <= n_55; ++i_55)
        if (!vis_55[i_55] && w_55[p_55][i_55]) {
            vis_55[i_55] = true;
            tr_55[t_55] = i_55;
            gen_55(t_55 + 1, i_55);
            vis_55[i_55] = false;
        }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";

    cin >> n_55 >> k_55 >> m_55;
    for (int i_55 = 1, u_55, v_55; i_55 <= m_55; ++i_55) {
        cin >> u_55 >> v_55;
        w_55[u_55][v_55] = w_55[v_55][u_55] = 1;
    }
    for (int i_55 = 1; i_55 <= n_55; ++i_55)
        w_55[0][i_55] = 1;
    gen_55(1, 0);

    cout << res_55 / 2;

    return 0;
}
// Bài 3.12 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab3

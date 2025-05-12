// Bài 3.8 - Phạm Ngọc Tuyên - 20235455
#include <bits/stdc++.h>
using namespace std;

struct state {
    int i_55, j_55;
    state(int _i_55 = 0, int _j_55 = 0) : i_55(_i_55), j_55(_j_55) {}
};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "-------------- Pham Ngoc Tuyen - 20235455 ---------------\n";
    int n_55, M_55;
    cin >> n_55 >> M_55;
    int m_55[n_55 + 1];
    for (int i_55 = 1; i_55 <= n_55; ++i_55) cin >> m_55[i_55];
    int x_55[n_55 + 1];
    stack<state> s_55;
    // sum of selected weights
    int sum_55 = 0;
    s_55.push(state(1, -1));
    while (!s_55.empty()) {
        state& top_55 = s_55.top();
        if (top_55.i_55 > n_55) {
            if (sum_55 == M_55) {
                for (int i_55 = 1; i_55 <= n_55; ++i_55) {
                    if (x_55[i_55] == -1) cout << '-' << m_55[i_55];
                    if (x_55[i_55] == 1) cout << '+' << m_55[i_55];
                }
                cout << '=' << M_55;
                exit(0);
            }
            s_55.pop();
            continue;
        }
        if (top_55.j_55 > -1)
            sum_55 -= m_55[top_55.i_55] * x_55[top_55.i_55];
        if (top_55.j_55 > 1) {
            s_55.pop();
            continue;
        }
        x_55[top_55.i_55] = top_55.j_55;
        sum_55 += m_55[top_55.i_55] * x_55[top_55.i_55];
        s_55.push(state(top_55.i_55 + 1, -1));
        ++top_55.j_55;
    }
    cout << -1;

    return 0;
}
// Bài 3.8 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab3

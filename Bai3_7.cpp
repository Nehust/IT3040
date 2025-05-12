// Bài 3.7 - Phạm Ngọc Tuyên - 20235455
#include <bits/stdc++.h>
using namespace std;

struct state {
    int i_55, j_55, old_L_55;
    // constructor
    state(int _i_55 = 0, int _j_55 = 0, int _L_55 = 0) :
        i_55(_i_55), j_55(_j_55), old_L_55(_L_55) {
    }
};

int main() {
    int n_55, k_55;
    cin >> n_55 >> k_55;
    int x_55[n_55 + 1];
    stack<state> s_55;
    // số lượng các số 0 liên tiếp
    int L_55 = 0;
    s_55.push(state(1, 1));
    s_55.push(state(1, 0));

    while (!s_55.empty()) {
        state& top_55 = s_55.top();
        // Lấy ra trạng thái hiện tại
        if (top_55.i_55 > n_55) {
            for (int i_55 = 1; i_55 <= n_55; ++i_55)
                cout << x_55[i_55] << " \n"[i_55 == n_55];
            s_55.pop();
            continue;
        }

        s_55.pop();
        int i_55 = top_55.i_55, j_55 = top_55.j_55;
        L_55 = top_55.old_L_55;
        x_55[i_55] = j_55;
        if (j_55) L_55++; else L_55 = 0;
        if (i_55 < n_55 && L_55 + 1 < k_55) s_55.push(state(i_55 + 1, 1, L_55));
        s_55.push(state(i_55 + 1, 0, L_55));
    }
    return 0;
}
// Bài 3.7 - Phạm Ngọc Tuyên - 20235455
// Tuần 36 - Lab3

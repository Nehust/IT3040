// Bai 5.9 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int x_55, y_55, z_55;
} block_55;

int n_55;
block_55 a_55[100];
int maxh_55[100];

void input_55() {
    cin >> n_55;
    if (n_55 == 0) exit(0);

    int x_55, y_55, z_55;
    for (int i_55 = 1; i_55 <= n_55; i_55++) {
        cin >> x_55 >> y_55 >> z_55;

        a_55[3 * i_55 - 2] = { x_55, y_55, z_55 };
        a_55[3 * i_55 - 1] = { y_55, z_55, x_55 };
        a_55[3 * i_55] = { z_55, x_55, y_55 };
    }

    memset(maxh_55, 0, sizeof(maxh_55));
}

int dp_55(int i_55) {
    if (maxh_55[i_55] != 0) return maxh_55[i_55];
    maxh_55[i_55] = a_55[i_55].z_55;

    for (int j_55 = 1; j_55 <= 3 * n_55; j_55++) {
        if ((a_55[i_55].x_55 < a_55[j_55].x_55 && a_55[i_55].y_55 < a_55[j_55].y_55) ||
            (a_55[i_55].x_55 < a_55[j_55].y_55 && a_55[i_55].y_55 < a_55[j_55].x_55)) {
            maxh_55[i_55] = max(maxh_55[i_55], a_55[i_55].z_55 + dp_55(j_55));
        }
    }
    return maxh_55[i_55];
}

int main() {
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    int cnt_55 = 1;
    while (true) {
        int res_55 = 0;
        input_55();
        for (int i_55 = 1; i_55 <= 3 * n_55; i_55++) {
            res_55 = max(res_55, dp_55(i_55));
        }

        printf("Case %d: maximum height = %d\n", cnt_55++, res_55);
    }
    return 0;
}

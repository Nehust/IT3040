// Bai 5.8 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <bits/stdc++.h>

using namespace std;

int w_55, h_55;
int table_55[601][601];

void init_55() {
    for (int i_55 = 1; i_55 <= h_55; i_55++) {
        for (int j_55 = 1; j_55 <= w_55; j_55++) {
            table_55[i_55][j_55] = i_55 * j_55;
        }
    }
}

int main()
{
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m_55;
    cin >> w_55 >> h_55;
    cin >> m_55;
    init_55();
    for (int i_55 = 0; i_55 < m_55; i_55++) {
        int tmp1_55, tmp2_55;
        cin >> tmp1_55 >> tmp2_55;
        table_55[tmp2_55][tmp1_55] = 0;
    }

    //dp
    for (int i_55 = 1; i_55 <= h_55; i_55++) {
        for (int j_55 = 1; j_55 <= w_55; j_55++) {
            int minWaste_55 = table_55[i_55][j_55];
            // horizonal cut
            for (int k_55 = 1; k_55 <= i_55; k_55++) {
                minWaste_55 = min(minWaste_55, table_55[k_55][j_55] + table_55[i_55 - k_55][j_55]);
            }
            // vertical cut
            for (int k_55 = 1; k_55 <= j_55; k_55++) {
                minWaste_55 = min(minWaste_55, table_55[i_55][k_55] + table_55[i_55][j_55 - k_55]);
            }
            table_55[i_55][j_55] = minWaste_55;
        }
    }

    cout << table_55[h_55][w_55] << endl;
}

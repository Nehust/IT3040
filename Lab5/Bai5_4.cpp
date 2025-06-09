// Bai 5.4 - Tuan 40
// Phạm Ngọc Tuyên - 20235455 - 750829 - 20242
#include <bits/stdc++.h>
using namespace std;
int m_55, n_55, Smin_55 = 1e9 + 7;
long long S_55 = 0;
int cmin_55 = 100000000;
int x_55[100];
int c_55[100][100];
vector<int> flag_55(100, false);

void TRY_55(int k_55)
{
    for (int i_55 = 2; i_55 <= n_55; i_55++)
    {
        if (flag_55[i_55] == false && c_55[x_55[k_55 - 1]][i_55] != -1)
        {
            flag_55[i_55] = true;
            x_55[k_55] = i_55;
            S_55 = S_55 + c_55[x_55[k_55 - 1]][i_55];
            if (k_55 == n_55)
            {
                if (S_55 + c_55[i_55][1] < Smin_55 && c_55[i_55][1] != -1)
                    Smin_55 = S_55 + c_55[i_55][1];
            }
            else if (S_55 + cmin_55 * (n_55 - k_55 + 1) < Smin_55)
            {
                TRY_55(k_55 + 1);
            }
            flag_55[i_55] = false;
            S_55 = S_55 - c_55[x_55[k_55 - 1]][i_55];
        }
    }
}

int main()
{
    cout << "Pham Ngoc Tuyen - 20235455" << endl;
    int a_55, b_55;
    cin >> n_55 >> m_55;
    for (int i_55 = 1; i_55 <= n_55; i_55++)
        for (int j_55 = 1; j_55 <= n_55; j_55++)
        {
            if (i_55 == j_55)
                c_55[i_55][j_55] = 0;
            else
                c_55[i_55][j_55] = -1;
        }
    for (int i_55 = 0; i_55 < m_55; i_55++)
    {
        cin >> a_55 >> b_55;
        cin >> c_55[a_55][b_55];
        if (c_55[a_55][b_55] < cmin_55)
            cmin_55 = c_55[a_55][b_55];
    }
    x_55[1] = 1;
    flag_55[1] = true;
    TRY_55(2);
    cout << Smin_55;
}

